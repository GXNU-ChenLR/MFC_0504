
// UsingLibDllView.cpp : CUsingLibDllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CUsingLibDllView 构造/析构

CUsingLibDllView::CUsingLibDllView()
{
	// TODO: 在此处添加构造代码

}

CUsingLibDllView::~CUsingLibDllView()
{
}

BOOL CUsingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingLibDllView 绘制

void CUsingLibDllView::OnDraw(CDC* pDC)
{
	CUsingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("来自静态库的消息：factorial(5)=%d"), factorial(5));
	pDC->TextOutW(100, 100, s);

	FAC fac;
	float deg = fac.convert(30.0);
	CString ss;
	ss.Format(_T("来自静态库的消息：30.0角度的弧度值为%f"), deg);
	pDC->TextOutW(100, 150, ss);

	CString s1, ss1;
	s1.Format(_T("来自动态库的消息：factorial(5)=%d"), factorial2(5));
	pDC->TextOutW(100, 200, s1);

	FAC2 fac2;
	float deg2 = fac.convert(30.0);
	ss1.Format(_T("来自动态库的消息：30.0角度的弧度值为%f"), deg2);
	pDC->TextOutW(100, 250, ss1);
}


// CUsingLibDllView 诊断

#ifdef _DEBUG
void CUsingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLibDllDoc* CUsingLibDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLibDllDoc)));
	return (CUsingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLibDllView 消息处理程序
