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

#include <frc/commands/Subsystem.h>
#include <frc2135/RobotConfig.h>
#include <frc2135/TalonUtils.h>

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "ctre/Phoenix.h"
#include "frc/DoubleSolenoid.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES


/**
 *
 *
 * @author ExampleAuthor
 */
class Intake: public frc::Subsystem
{

private:
    // It's desirable that everything possible is private except
    // for methods that implement subsystem capabilities

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<WPI_TalonSRX> motorIN6;
	std::shared_ptr<frc::DoubleSolenoid> position;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    // Declare constants
    const int   m_intakeDebug = 0;      // DEBUG flag to disable/enable extra logging calls
    const int   kCANTimeout = 30;       // CAN timeout in msec to wait for response

    // Declare module variables
    bool        m_talonValidIN6;        // Health indicator for intake Talon 6

    double      m_acquireSpeed;
    double      m_expelSpeed;

public:
    Intake();
    void InitDefaultCommand() override;
    void Periodic() override;

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // Intake motor control states
    enum intakeDirection_e
    {
        INTAKE_STOP     = 0,
        INTAKE_FORWARD  = 1,
        INTAKE_REVERSE  = -1
    } intakeDirection_e;

    void Initialize(void);
    void FaultDump(void);

    void SetIntakeMotorDirection(int direction);
    void SetDeployerSolenoid(bool extended);
};
