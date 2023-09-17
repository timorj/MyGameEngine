#include "BaseApplication.hpp"

int MyGameEngine::BaseApplication::Initialize(){
m_bQuit = false;
return 0;

}

void MyGameEngine::BaseApplication::Finalize(){


}

void MyGameEngine::BaseApplication::Tick(){


}

bool MyGameEngine::BaseApplication::IsQuit(){
	return m_bQuit;
}

