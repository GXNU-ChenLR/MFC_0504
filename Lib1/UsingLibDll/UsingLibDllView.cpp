
// UsingLibDllView.cpp : CUsingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLibDll.h"
#endif

#include "UsingLibDllDoc.h"
#include "UsingLibDllView.h"
#include "w1.h"
#include "Win32D.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsingLibDllView

IMPLEMENT_DYNCREATE(CUsingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUsingLibDllView, CView)
END_MESSAGE_MAP()

// CUsingLibDllView ����/����

CUsingLibDllView::CUsingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLibDllView::~CUsingLibDllView()
{
}

BOOL CUsingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLibDllView ����

void CUsingLibDllView::OnDraw(CDC* pDC)
{
	CUsingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("���Ծ�̬�����Ϣ��factorial(5)=%d"), factorial(5));
	pDC->TextOutW(100, 100, s);

	FAC fac;
	float deg = fac.convert(30.0);
	CString ss;
	ss.Format(_T("���Ծ�̬�����Ϣ��30.0�ǶȵĻ���ֵΪ%f"), deg);
	pDC->TextOutW(100, 150, ss);

	CString s1, ss1;
	s1.Format(_T("���Զ�̬�����Ϣ��factorial(5)=%d"), factorial2(5));
	pDC->TextOutW(100, 200, s1);

	FAC2 fac2;
	float deg2 = fac.convert(30.0);
	ss1.Format(_T("���Զ�̬�����Ϣ��30.0�ǶȵĻ���ֵΪ%f"), deg2);
	pDC->TextOutW(100, 250, ss1);
}


// CUsingLibDllView ���

#ifdef _DEBUG
void CUsingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLibDllDoc* CUsingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLibDllDoc)));
	return (CUsingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLibDllView ��Ϣ�������
