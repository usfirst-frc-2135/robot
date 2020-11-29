// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#pragma once

#include "frc/Joystick.h"
#include "frc/buttons/JoystickButton.h"

class OI
{

private:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS



















std::shared_ptr<frc::Joystick> controlBoard2;
std::shared_ptr<frc::JoystickButton> dtRampDown;
std::shared_ptr<frc::JoystickButton> dtRampUp;
std::shared_ptr<frc::JoystickButton> ledToggle;
std::shared_ptr<frc::Joystick> controlBoard;
std::shared_ptr<frc::JoystickButton> spRotation;
std::shared_ptr<frc::JoystickButton> spColor;
std::shared_ptr<frc::JoystickButton> clDescend;
std::shared_ptr<frc::JoystickButton> clAscend;
std::shared_ptr<frc::JoystickButton> clStow;
std::shared_ptr<frc::JoystickButton> clDeploy;
std::shared_ptr<frc::JoystickButton> shFire;
std::shared_ptr<frc::JoystickButton> shRun;
std::shared_ptr<frc::JoystickButton> cvUp;
std::shared_ptr<frc::JoystickButton> cvDown;
std::shared_ptr<frc::JoystickButton> inAquire;
std::shared_ptr<frc::JoystickButton> inExpel;
std::shared_ptr<frc::JoystickButton> inStow;
std::shared_ptr<frc::JoystickButton> inDeploy;
std::shared_ptr<frc::Joystick> dStick;
std::shared_ptr<frc::JoystickButton> dtQuickTurn;
std::shared_ptr<frc::JoystickButton> dtAlignTurn;
std::shared_ptr<frc::JoystickButton> dtModeToggle;
std::shared_ptr<frc::JoystickButton> dtShiftSpeed;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

public:
    OI();

    // TODO: (JLM) Re-map keys to game controllers and remove second control board
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

std::shared_ptr<frc::Joystick> getDStick();
std::shared_ptr<frc::Joystick> getControlBoard();
std::shared_ptr<frc::Joystick> getControlBoard2();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};