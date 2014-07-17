#pragma once
#ifdef _WIN32
#include "io.h"
#endif
#include <cv.h>
#include <highgui.h>
#include <ml.h>
#include <iostream>
#include "TErrorCode.h"
using namespace std;

#define MACRO_(x) (#x)
#define SHOWMACRO(mac) MACRO_(mac)
namespace ImageTypeAJudge_2_2_0
{
#ifndef MAX
#define MAX(a,b) ((a) < (b) ? (b) : (a))
#endif
#ifndef MIN
#define MIN(a,b) ((a) > (b) ? (b) : (a))
#endif
#ifndef M_PI
#define M_PI	3.141592653
#endif

#define image_size 256 //128
#define gist_image_size 32
#define file_ImgID_length 100	//����ImgID����
#define file_path_length 1024		//����·������

//�ֿ�
#define CLDSUB 4

//����ѡ��
#define EHD		1
#define CLD     1
#define BLUR	1
#define GIST    1
#define CSD		0
#define CH      0

//��������
#define EHDDIM		80//144
#define CLDDIM		12	
#define BLURDIM		5
#define CSDDIM		64
#define CHDIM		64

//GIST
//in matlab n_scale = 4 orientations_per_scale[n_scale]={8,8,8,8}
const int fc = 4;
const int padding = 5;
const int nblocks=4;
const int n_scale=3;
const int orientations_per_scale[n_scale]={8,8,4};
const int gabor_filter_num = 20;

#define gist_gray 0
#if gist_gray
#define GISTDIM    (nblocks*nblocks*gabor_filter_num)	//gray--320
#else
#define GISTDIM    (3*nblocks*nblocks*gabor_filter_num)	//RGB--960
#endif

//�ṹ���ֽڶ���
#pragma pack(push)	//����ǰpack����ѹջ����
#pragma pack(1)		//�����ڽṹ�嶨��֮ǰʹ��
struct Feat
{
#if EHD	//����
	float fEHD[EHDDIM];
	float fsobelEHD[EHDDIM];
	float fBinEHD[EHDDIM];
	float fOptEHD[EHDDIM];
#endif

#if CLD	//��ɫ
	float fCLD[CLDDIM];
#endif

#if BLUR
	float fBlur[BLURDIM];
#endif

#if CSD	//��ɫ
	float fCSD[CSDDIM];
#endif

#if CH	//��ɫ
	float fCH[CHDIM];
#endif

#if GIST
	float fGIST[GISTDIM];
#endif
};
#pragma pack(pop)	//�ָ���ǰ��pack����
}