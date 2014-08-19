/**
* Copyright (C) 2014-2050 
* All rights reserved.
* 
* @file       RealWndHandler-i.h
* @brief      
* @version    v1.0      
* @author     SOUI group   
* @date       2014/08/14
* 
* Describe     �ṩRealWnd�Ĵ��������ٹ���
*/
#pragma  once
#include "../unknown/obj-ref-i.h"

namespace SOUI
{
    class SRealWnd;
    /** 
    * @struct     IRealWndHandler
    * @brief     
    *
    * Describe   
    */
    struct IRealWndHandler : public IObjRef
    {
        /**
        * SRealWnd::OnRealWndCreate
        * @brief    ���ڴ���
        * @param    SRealWnd *pRealWnd -- ����ָ��
        *
        * Describe  ���ڴ���
        */    
        virtual HWND OnRealWndCreate(SRealWnd *pRealWnd)=NULL;

        /**
        * SRealWnd::OnRealWndInit
        * @brief    ��ʼ������
        * @param    SRealWnd *pRealWnd -- ����ָ��
        *
        * Describe  ��ʼ������
        */
        virtual BOOL OnRealWndInit(SRealWnd *pRealWnd)=NULL;

        /**
        * SRealWnd::OnRealWndDestroy
        * @brief    ���ٴ���
        * @param    SRealWnd *pRealWnd -- ����ָ��
        *
        * Describe  ���ٴ���
        */
        virtual void OnRealWndDestroy(SRealWnd *pRealWnd)=NULL;

        /**
        * SRealWnd::OnRealWndSize
        * @brief    �������ڴ�С
        * @param    SRealWnd *pRealWnd -- ����ָ��
        *
        * Describe  �������ڴ�С
        */
        virtual void OnRealWndSize(SRealWnd *pRealWnd)=NULL;
    };

}//namespace SOUI