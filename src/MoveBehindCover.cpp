#include "MoveBehindCover.h"
#include <iostream>

MoveBehindCoverAction::MoveBehindCoverAction()
{
	name = "Move Behind Cover Action";
}

MoveBehindCoverAction::~MoveBehindCoverAction()
= default;

void MoveBehindCoverAction::Action()
{
	std::cout << "Moving Behind Cover" << std::endl;
}