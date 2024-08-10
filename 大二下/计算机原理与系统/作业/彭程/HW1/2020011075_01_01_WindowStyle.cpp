/*************************************************************************
���ļ�����                 WindowStyle.cpp
������ģ���Ŀ�ġ�         Windowstyle�ຯ��ʵ��
�������߼����ڡ�           ��� 2022/3/5
*************************************************************************/

#include"WindowStyle.h"

/*************************************************************************
���������ơ�       WindowStyle(Style m_style)
���������ܡ�       WindowStyle��Ĺ��캯��
��������           Style m_style
������ֵ��         ��
�������߼����ڡ�   ��� 2022/3/5
*************************************************************************/
 WindowStyle:: WindowStyle(Style m_style){
    Status.Caption=Caption_On;
    Status.Client=Client_On;
    Status.Close=Close_On;
    Status.Edge=Edge_On;
    Status.Icon=Icon_On;
    Status.Maximize=Maximize_On;
    Status.Minimize=Minimize_On;
    Status.Resizer=Resizer_On;
  switch (m_style)
  {
  case 2:
    Status.Icon=OFF;
    Status.Maximize=OFF;
    Status.Minimize=OFF;
    Status.Resizer=OFF;
    break;
  case 3:
    Status.Resizer=OFF;
    break;
  case 4:
    Status.Caption=OFF;
    Status.Close=OFF;
    Status.Edge=OFF;
    Status.Icon=OFF;
    Status.Maximize=OFF;
    Status.Minimize=OFF;
    Status.Resizer=OFF;
    break;
  case 5:
    Status.Caption=OFF;
    Status.Edge=OFF;
    Status.Icon=OFF;
    Status.Maximize=OFF;
    Status.Minimize=OFF;
    Status.Resizer=OFF;
    break;
  case 6:
    Status.Caption=OFF;
    Status.Icon=OFF;
    Status.Maximize=OFF;
    Status.Minimize=OFF;
    break;
  default:
    break;
  }
}

 /*************************************************************************
���������ơ�       ~WindowStyle()
���������ܡ�       WindowStyle�����������
��������           ��
������ֵ��         ��
�������߼����ڡ�   ��� 2022/3/5
*************************************************************************/
 WindowStyle::~ WindowStyle(){
}

 /*************************************************************************
 ���������ơ�       IsTitleBarShown()
 ���������ܡ�       ����TitleBar����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsTitleBarShown(){
  return ~(~Status.Icon & ~Status.Caption & ~Status.Maximize & ~Status.Minimize & ~Status.Close) ;
}

/*************************************************************************
 ���������ơ�       IsBoardShown()
 ���������ܡ�       ����Board����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsBoardShown(){
  return Status.Edge;
}

/*************************************************************************
 ���������ơ�       IsClientShown()
 ���������ܡ�       ����Client����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsClientShown(){
  return Status.Client;
}

/*************************************************************************
 ���������ơ�       IsIconShown()
 ���������ܡ�       ����Icon����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsIconShown(){
  return Status.Icon;
}

/*************************************************************************
 ���������ơ�       IsCaptionShown()
 ���������ܡ�       ����Caption����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsCaptionShown(){
  return Status.Caption;
}

/*************************************************************************
 ���������ơ�       IsMaximizeShown()
 ���������ܡ�       ����Maximize����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsMaximizeShown(){
  return Status.Maximize;
}

/*************************************************************************
 ���������ơ�       IsCloseShown()
 ���������ܡ�       ����Close����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsCloseShown(){
  return Status.Close;
}

/*************************************************************************
 ���������ơ�       IsEdgeShown()
 ���������ܡ�       ����Edge����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsEdgeShown(){
  return Status.Edge;
}

/*************************************************************************
 ���������ơ�       IsResizerShown()
 ���������ܡ�       ����Resizer����ʾ���
 ��������           ��
 ������ֵ��         ��
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
bool WindowStyle::IsResizerShown(){
  return Status.Resizer;
}


/*************************************************************************
 ���������ơ�       GetStatus()
 ���������ܡ�       ��ȡ��ǰ��ʾ���
 ��������           ��
 ������ֵ��         status�ṹ�����
 �������߼����ڡ�   ��� 2022/3/5
 *************************************************************************/
status WindowStyle::GetStatus(){
  return Status;
}