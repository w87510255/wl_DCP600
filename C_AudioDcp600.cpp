#include "C_AudioDcp600.h"

using namespace std;

const unsigned short UDP_PORT=8888;
const int BUFFERLENGTH = 1024*1;
const int MINDELYTIME = 30;

C_AudioDCP600::C_AudioDCP600():C_AudioDevice(), m_bConnected(0)
{
	m_vecChanelList.clear();
	m_vecChanelList.push_back("Digital8");	
	m_vecChanelList.push_back("Anglog8");	
	m_vecChanelList.push_back("NonSync");	
	m_vecChanelList.push_back("Aux");	
	m_vecChanelList.push_back("unknow");	
}

C_AudioDCP600::~C_AudioDCP600()
{
	m_bConnected = 0;
}

int C_AudioDCP600::fnInit(const string &strIp, unsigned short unPort,
						 const string &strUserName, const string &strPasswd)
{
						  
	


