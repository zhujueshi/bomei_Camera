#ifndef _RGSTOCKAPI_H
#define _RGSTOCKAPI_H

#define EXIT_STOCK   0xF0    //�˳�ʱ�ķ���ֵ

//********************************************************************
//��������:��ʱˢ��
//�������: 
//����ֵ:
//********************************************************************

extern void   RGUpdataTimer(void);

//********************************************************************
//��������:��Ʊ���
//�������: 
//����ֵ:�ɹ�����0,ʧ�ܷ���-1
//********************************************************************

extern	int		stock_main( void );

//********************************************************************
//��������:��ֵ����
//�������:��ֵ
//����ֵ:�ɹ�����0,ʧ�ܷ���-1
//********************************************************************

extern	int		_process_keys( int );



typedef const unsigned char * pImageData;

//********************************************************************
//��������:��ȡͼƬ��ַ
//�������: menu
//          banner
//����ֵ:�ɹ�����0,ʧ�ܷ���-1
//********************************************************************

extern  int   GetStockResAddr(pImageData ,pImageData,pImageData,pImageData,pImageData);


//********************************************************************
//��������:����5����ɫֵ
//
// @param   T_U32 red:�۸�����(Rise)����ɫ
// @param   T_U32 green:�۸��µ�(Drop)����ɫ
// @param   T_U32 blue:���ť����ɫ
// @param   T_U32 yellow:�����˵������, ����Ϣ�;���2����ɫ��
// @param   T_U32 skyblue:�ɽ�������ɫ
//
//����ֵ:�ɹ�����0,ʧ�ܷ���-1
//********************************************************************
extern int RG_modifyRGBColor(T_U32, T_U32, T_U32, T_U32, T_U32);


//********************************************************************
//��������:�ж��˳�����Ľӿ�
//�������: ����ֵ(x,y)
//          
//����ֵ:�˳����򷵻�1����������0
//********************************************************************

extern  int ispointinreturn(int,int);



//********************************************************************
//��������:�ж��˳��Ľӿ�
//�������: 
//          
//����ֵ:�˳����򷵻�1����������0
//********************************************************************
extern int isDialog_StockEixt(void);



//********************************************************************
//��������:suspendʱ������Ļ
//�������: 
//          
//����ֵ:
//********************************************************************
extern void RGStock_Suspend(void);



//********************************************************************
//��������:�ָ���Ļ
//�������: 
//          
//����ֵ:
//********************************************************************
extern void RGStock_Rusume(void);



//********************************************************************
//��������:ϵͳ�쳣�˳��ӿ�:�������ļ�
//�������: 
//          
//����ֵ:
//********************************************************************
extern void	stock_quit_Ex(void);

#endif