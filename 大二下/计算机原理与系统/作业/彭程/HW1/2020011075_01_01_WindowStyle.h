/*************************************************************************
���ļ�����                 WindowStyle.cpp
������ģ���Ŀ�ġ�         Windowstyle��ʵ��
�������߼����ڡ�           ��� 2022/3/5
*************************************************************************/
#ifndef WINDOWSTYLE_H
#define WINDOWSTYLE_H

/*************************************************************************
��ö��������         Style
�����ܡ�             ö�ٸ����ڷ��
�������߼����ڡ�     ��� 2022/3/5
*************************************************************************/
enum Style{
Sizeable = 0x1,
Dialog = 0x2,
Single = 0x3,
None = 0x4,
Tool = 0x5,
SizeableTool = 0x6
};

/*************************************************************************
��ö��������         IsShown
�����ܡ�             ö�ٸ�����Ԫ����ʾ���
�������߼����ڡ�     ��� 2022/3/5
*************************************************************************/
enum IsShown{
  OFF = 0,
  Icon_On = 0x11,
  Caption_On = 0x21,
  Maximize_On = 0x31,
  Minimize_On = 0x41,
  Close_On = 0x51,
  Edge_On = 0x61,
  Resizer_On = 0x71,
  Client_On = 0x81
};

/*************************************************************************
���ṹ������         status
�����ܡ�             �洢���ڷ���Ԫ����ʾ���
�������߼����ڡ�     ��� 2022/3/5
*************************************************************************/
struct status
{
  bool Icon : 1; 
  bool Caption : 1;
  bool Maximize : 1;
  bool Minimize : 1;
  bool Close : 1;
  bool Edge : 1;
  bool Resizer : 1;
  bool Client : 1;
};


/*************************************************************************
��������             WindowStyle
�����ܡ�             ���ڷ���࣬�洢���鿴�����Ԫ����ʾ���
���ӿ�˵����         WindowStyle(Style m_style);
                     ~ WindowStyle();
                     status GetStatus();
                     bool IsTitleBarShown();
                     bool IsBoardShown();
                     bool IsClientShown();
                     bool IsIconShown();
                     bool IsCaptionShown();
                     bool IsMaximizeShown();
                     bool IsCloseShown();
                     bool IsEdgeShown();
                     bool IsResizerShown();
�������߼����ڡ�     ��� 2022/3/5
*************************************************************************/
class  WindowStyle
{
private:
  status Status;//״̬�ṹ��
public:
  WindowStyle(Style m_style);//���캯��
  ~ WindowStyle();//��������
  status GetStatus();//������ʾ״̬
  bool IsTitleBarShown();//Titlebar�Ƿ���ʾ
  bool IsBoardShown();//Board�Ƿ���ʾ
  bool IsClientShown();//Client�Ƿ���ʾ
  bool IsIconShown();//Icon�Ƿ���ʾ
  bool IsCaptionShown();//Caption�Ƿ���ʾ
  bool IsMaximizeShown();//Maximize�Ƿ���ʾ
  bool IsCloseShown();//Close�Ƿ���ʾ
  bool IsEdgeShown();//Edge�Ƿ���ʾ
  bool IsResizerShown();//Resize�Ƿ���ʾ
};

#endif