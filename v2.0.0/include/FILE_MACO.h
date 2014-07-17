#pragma once

namespace ImageTypeAJudge_2_0_0
{
//�ֿ�
#define CLDSUB 4

//��������
#define EHDDIM  80//144
#define CLDDIM 12	
#define BLURDIM 5

//����ѡ��
#define EHD							1
#define CLD                         1
#define BLUR						1

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
};
}