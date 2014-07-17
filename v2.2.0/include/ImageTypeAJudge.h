#pragma once
#include <cv.h>

namespace ImageTypeAJudge_2_2_0
{
	//************************************
	// Method:    InitImageTypeAJudgeClassify
	// FullName:  InitImageTypeAJudgeClassify
	// Access:    public 
	// Returns:   int 0 TOK other TErrorCode.h 
	// Qualifier:
	// Parameter: char * featPath  ѵ���ص��������ļ�
	// Parameter: CvSVM & imagetypeajudge_svm ��Ҫ�����ķ���������
	//************************************
	int InitImageTypeAJudgeClassify(char* featPath);

	//************************************
	// Method:    ImageTypeAJudge
	// FullName:  ImageTypeAJudge
	// Access:    public 
	// Returns:   int 0 TOK other TErrorCode.h
	// Qualifier:
	// Parameter: IplImage * pSrcImg:input image
	// Parameter: int &result:����Aͼ�������1-Aͼ,0-��Aͼ��
	//************************************
	int ImageTypeAJudge(IplImage* pSrcImg,int &result);

	//************************************
	// Method:    ReleaseImageTypeAJudgeClassify
	// FullName:  ReleaseImageTypeAJudgeClassify
	// Access:    public 
	// Returns:   int 0 TOK other TErrorCode.h 
	// Qualifier:
	//************************************
	int ReleaseImageTypeAJudgeClassify();

	void version();
}