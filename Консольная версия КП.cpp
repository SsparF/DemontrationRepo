#define _CRT_SECURE_NO_WARGNINGS
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <iomanip>
#include <cmath>

#pragma pack(push,1)
const char* file1 = "Корги.bmp"; //ЗАМЕНИТЕ ЗА СВОЁ ИЗОБРАЖЕНИЕ В ФОРМАТЕ *bmp
using namespace std;

struct Pixel
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	FILE* file;
	fopen_s(&file, file1, "rb");
	if (file == nullptr)
	{
		printf("\n Не можем открыть файл %s!", file1);
		system("pause > NUL");
		return 1;
	}

	BITMAPFILEHEADER header1;
	fread(&header1, sizeof(BITMAPFILEHEADER), 1, file);
	if (header1.bfType != 19778)
	{
		printf("\n Ошибка файла %s!", "Тигр.bmp");
	}

	BITMAPINFOHEADER header2;
	fread(&header2, sizeof(BITMAPINFOHEADER), 1, file);
	//if (header1.bfType != 19778)
	//{
	//	printf("\n Ошибка файла %s!", "стул.bmp");
	//}

	size_t padding = header2.biWidth % 4;
	size_t pixel_count = header2.biWidth * header2.biHeight;

	fseek(file, header1.bfOffBits, SEEK_SET);

	Pixel* raster = (Pixel*)malloc(sizeof(Pixel) * pixel_count);
	Pixel* temp = raster;

	for (int row = 0; row < header2.biHeight; row++)
	{
		size_t count = fread(temp, sizeof(Pixel), header2.biWidth, file);
		fseek(file, padding, SEEK_CUR);
		temp += count;
		if (count != header2.biWidth)
		{
			printf("Файл поврежден\n");
			system("pause > NUL");
			fclose(file);
			free(raster);
			return 1;
		}
	}

	Pixel** mas = new Pixel * [header2.biHeight];
	if (mas == NULL)
	{
		cout << "Не удалось выделить память.\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < header2.biHeight; i++)
	{
		mas[i] = new Pixel[header2.biWidth];
		if (mas[i] == NULL)
		{
			cout << "Не удалось выделить память.\n";
			system("pause");
			return 0;
		}
	}




	// КАРТИНКА В ЧЕРНО-БЕЛУЮ-----------------------------------------------------------------

	/*for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			int k = (int)(mas[i][j].r + mas[i][j].g + mas[i][j].b) / 3;
			if (k >= 127)
			{
				mas[i][j].r = 255;
				mas[i][j].g = 255;
				mas[i][j].b = 255;
			}
			else
			{
				mas[i][j].r = 0;
				mas[i][j].g = 0;
				mas[i][j].b = 0;
			}
			*p = mas[i][j];
		}
	}*/

	// КАРТИНКА В ОТТЕНКИ СЕРОГО--------------------------------------------------------------------

	/*for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			int ser;
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			ser = (int)((mas[i][j].r * 0.30) + (mas[i][j].g * 0.59) + (mas[i][j].b * 0.11));
			mas[i][j].r = ser;
			mas[i][j].g = ser;
			mas[i][j].b = ser;
			*p = mas[i][j];
		}
	}*/

	//КАРТИНКА ГАММА-КОРРЕКЦИЯ----------------------------------------------------------------------

	/*float gamma = 1.4;
	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			int ser;
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			mas[i][j].r = pow((mas[i][j].r), 1.0 / gamma)*4.8;
			mas[i][j].g = pow((mas[i][j].g), 1.0 / gamma)*4.8;
			mas[i][j].b = pow((mas[i][j].b), 1.0 / gamma)*4.8;
			*p = mas[i][j];
		}
	}*/

	//Картинка отзеркаленная справо налево

	//for (int i = 0; i < header2.biHeight; i++) 
	//{
	//	for (int j = 0; j < (header2.biWidth / 2)+1; j++)
	//	{
	//		Pixel* p = raster + header2.biWidth * i + j;
	//		mas[i][j] = *p;
	//	/*	*p = mas[i][j];*/
	//	}
	//}

	//for (int i = 0; i < header2.biHeight; i++) 
	//{
	//	for (int j = 0; j < header2.biWidth; j++)
	//	{
	//		Pixel* p = raster + header2.biWidth * i + j;
	//		/*mas[i][j] = *p;*/
	//		mas[i][header2.biWidth - j]= mas[i][j];
	//		*p = mas[i][j];
	//	}
	//}

	// Картинка отзеркаленная слева направо

	/*for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = header2.biWidth; j > header2.biWidth / 2; j--)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			*p = mas[i][j];
		}
	}

	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			mas[i][j] = mas[i][header2.biWidth - j];

			*p = mas[i][j];
		}
	}*/

	// Картинка отзеркаленная снизу вверх
	//for (int i = 0; i < (header2.biHeight/2)+1; i++)
	//{
	//	for (int j = 0; j < header2.biWidth; j++)
	//	{
	//		int ser;
	//		Pixel* p = raster + header2.biWidth * i + j;
	//		mas[i][j] = *p;
	//		/**p = mas[i][j];*/
	//	}
	//
	//}
	//for (int i = 0; i < header2.biHeight; i++)
	//{
	//	for (int j = 0; j < header2.biWidth; j++)
	//	{
	//		Pixel* p = raster + header2.biWidth * i + j;
	//		/*mas[i][j] = *p;*/
	//		mas[header2.biHeight - i - 1][j] = mas[i][j];
	//		*p = mas[i][j];
	//	}
	//}

	//Картинка отзеркаленная сверху вниз
	/*for (int i = header2.biHeight-1; i > header2.biHeight/2; i--)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			*p = mas[i][j];
		}
	}

	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			mas[i][j] = mas[header2.biHeight - i-1][j];
			*p = mas[i][j];
		}
	}*/

	//Отзеркаленная 1 четверть----------------------------------------------------------------------
	/*for (int i = header2.biHeight - 1; i > (header2.biHeight / 2) - 1; i--)
	{
		for (int j = 0; j < (header2.biWidth / 2) + 1; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
		}
	}

	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[header2.biHeight - i - 1][header2.biWidth - j] = mas[header2.biHeight - i - 1][j];
			mas[i][j] = mas[header2.biHeight - i - 1][j];
			*p = mas[i][j];
		}
	}*/

	//Отзеркаленная 2 четверть---------------------------------------------------
	/*for (int i = header2.biHeight - 1; i > (header2.biHeight / 2) - 1; i--)
	{
		for (int j = header2.biWidth; j > (header2.biWidth / 2) - 1; j--)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			*p = mas[i][j];
		}
	}

	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
			mas[i][j] = mas[header2.biHeight - i - 1][header2.biWidth - j];
			mas[header2.biHeight - i - 1][j] = mas[i][j];
			*p = mas[i][j];
		}
	}*/

	//Отзеркаленная 3 четверть
	/*for (int i = 0; i < (header2.biHeight / 2) + 1; i++)
	{
		for (int j = 0; j < (header2.biWidth / 2) + 1; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
		}
	}
	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[header2.biHeight - i - 1][header2.biWidth - j] = mas[i][j];
			mas[i][header2.biWidth - j] = mas[i][j];
			*p = mas[i][j];
		}
	}*/

	// Отзеркаленная 4 четверть--------------------------------------------------------------------
	/*for (int i = 0; i < (header2.biHeight / 2) + 1; i++)
	{
		for (int j = header2.biWidth; j > (header2.biWidth / 2) - 1; j--)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = *p;
		}
	}
	for (int i = 0; i < header2.biHeight; i++)
	{
		for (int j = 0; j < header2.biWidth; j++)
		{
			Pixel* p = raster + header2.biWidth * i + j;
			mas[i][j] = mas[i][header2.biWidth - j];
			mas[header2.biHeight - i - 1][j] = mas[i][header2.biWidth - j];
			*p = mas[i][j];
		}
	}*/

	FILE* new_file;
	fopen_s(&new_file, "result.bmp", "w+b");
	if (new_file == nullptr)
	{
		printf("Файл поврежден\n");
		system("pause > NUL");
		fclose(file);
		free(raster);
		return 1;
	}

	header1.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
	size_t fieles_count = fwrite(&header1, sizeof(header1), 1, new_file);
	fieles_count = fwrite(&header2, sizeof(header2), 1, new_file);
	temp = raster;

	for (int row = 0; row < header2.biHeight; row++)
	{
		size_t count = fwrite(temp, sizeof(Pixel), header2.biWidth, new_file);
		unsigned char zero = 0;
		fwrite(&zero, 1, padding, new_file);
		temp += count;
	}

	fclose(file);
	fclose(new_file);
	printf("The end\n");
	return 0;
}