#include "pch.h"

class $modify(PlayerObject)
{
	void setPosition(cocos2d::CCPoint const& p0)
	{
		cocos2d::CCPoint p0copy = { p0.x, p0.y };


		int currentframe = PlayLayer::get() != nullptr ? PlayLayer::get()->m_gameState.m_levelTime * CBot::m_tps : 0;

		if (CBot::m_currentstate == CBot::state::Recording)
		{
			CBot::physicsaction currentcube;

			// Bools
			currentcube.m_wasTeleported = m_wasTeleported;
			currentcube.m_fixGravityBug = m_fixGravityBug;
			currentcube.m_reverseSync = m_reverseSync;
			currentcube.m_justPlacedStreak = m_justPlacedStreak;
			currentcube.m_slopeSlidingMaybeRotated = m_slopeSlidingMaybeRotated;
			currentcube.m_quickCheckpointMode = m_quickCheckpointMode;
			currentcube.m_isCollidingWithSlope = m_isCollidingWithSlope;
			currentcube.m_isBallRotating = m_isBallRotating;
			currentcube.m_unk669 = m_unk669;
			currentcube.m_slopeFlipGravityRelated = m_slopeFlipGravityRelated;
			currentcube.m_isRotating = m_isRotating;
			currentcube.m_isBallRotating2 = m_isBallRotating2;
			currentcube.m_hasGlow = m_hasGlow;
			currentcube.m_isHidden = m_isHidden;
			currentcube.m_padRingRelated = m_padRingRelated;
			currentcube.m_maybeReducedEffects = m_maybeReducedEffects;
			currentcube.m_maybeIsFalling = m_maybeIsFalling;
			currentcube.m_shouldTryPlacingCheckpoint = m_shouldTryPlacingCheckpoint;
			currentcube.m_playEffects = m_playEffects;
			currentcube.m_maybeCanRunIntoBlocks = m_maybeCanRunIntoBlocks;
			currentcube.m_hasGroundParticles = m_hasGroundParticles;
			currentcube.m_hasShipParticles = m_hasShipParticles;
			currentcube.m_isOnGround3 = m_isOnGround3;
			currentcube.m_checkpointTimeout = m_checkpointTimeout;
			currentcube.m_unkBool5 = m_unkBool5;
			currentcube.m_maybeIsVehicleGlowing = m_maybeIsVehicleGlowing;
			currentcube.m_switchWaveTrailColor = m_switchWaveTrailColor;
			currentcube.m_practiceDeathEffect = m_practiceDeathEffect;
			currentcube.m_ringJumpRelated = m_ringJumpRelated;
			currentcube.m_maybeSpriteRelated = m_maybeSpriteRelated;
			currentcube.m_useLandParticles0 = m_useLandParticles0;
			currentcube.m_disableStreakTint = m_disableStreakTint;
			currentcube.m_alwaysShowStreak = m_alwaysShowStreak;
			currentcube.m_unk3e0 = m_unk3e0;
			currentcube.m_unk3e1 = m_unk3e1;
			currentcube.m_isAccelerating = m_isAccelerating;
			currentcube.m_isCurrentSlopeTop = m_isCurrentSlopeTop;
			currentcube.m_fadeOutStreak = m_fadeOutStreak;
			currentcube.m_canPlaceCheckpoint = m_canPlaceCheckpoint;
			currentcube.m_hasCustomGlowColor = m_hasCustomGlowColor;
			currentcube.m_maybeIsColliding = m_maybeIsColliding;
			currentcube.m_jumpBuffered = m_jumpBuffered;
			currentcube.m_stateRingJump = m_stateRingJump;
			currentcube.m_wasJumpBuffered = m_wasJumpBuffered;
			currentcube.m_wasRobotJump = m_wasRobotJump;
			currentcube.m_stateRingJump2 = m_stateRingJump2;
			currentcube.m_touchedRing = m_touchedRing;
			currentcube.m_touchedCustomRing = m_touchedCustomRing;
			currentcube.m_touchedGravityPortal = m_touchedGravityPortal;
			currentcube.m_maybeTouchedBreakableBlock = m_maybeTouchedBreakableBlock;
			currentcube.m_touchedPad = m_touchedPad;
			currentcube.m_isOnSlope = m_isOnSlope;
			currentcube.m_wasOnSlope = m_wasOnSlope;
			currentcube.m_maybeUpsideDownSlope = m_maybeUpsideDownSlope;
			currentcube.m_isShip = m_isShip;
			currentcube.m_isBird = m_isBird;
			currentcube.m_isBall = m_isBall;
			currentcube.m_isDart = m_isDart;
			currentcube.m_isRobot = m_isRobot;
			currentcube.m_isSpider = m_isSpider;
			currentcube.m_isUpsideDown = m_isUpsideDown;
			currentcube.m_isDead = m_isDead;
			currentcube.m_isOnGround = m_isOnGround;
			currentcube.m_isGoingLeft = m_isGoingLeft;
			currentcube.m_isSideways = m_isSideways;
			currentcube.m_isSwing = m_isSwing;
			currentcube.m_isDashing = m_isDashing;
			currentcube.m_holdingRight = m_holdingRight;
			currentcube.m_holdingLeft = m_holdingLeft;
			currentcube.m_leftPressedFirst = m_leftPressedFirst;
			currentcube.m_maybeHasStopped = m_maybeHasStopped;
			currentcube.m_maybeGoingCorrectSlopeDirection = m_maybeGoingCorrectSlopeDirection;
			currentcube.m_isSliding = m_isSliding;
			currentcube.m_isOnIce = m_isOnIce;
			currentcube.m_isOnGround4 = m_isOnGround4;
			currentcube.m_isMoving = m_isMoving;
			currentcube.m_platformerMovingLeft = m_platformerMovingLeft;
			currentcube.m_platformerMovingRight = m_platformerMovingRight;
			currentcube.m_isSlidingRight = m_isSlidingRight;
			currentcube.m_isPlatformer = m_isPlatformer;
			currentcube.m_affectedByForces = m_affectedByForces;
			currentcube.m_fixRobotJump = m_fixRobotJump;
			currentcube.m_inputsLocked = m_inputsLocked;
			currentcube.m_gv0123 = m_gv0123;
			currentcube.m_isOutOfBounds = m_isOutOfBounds;
			currentcube.m_disablePlayerSqueeze = m_disablePlayerSqueeze;
			currentcube.m_robotAnimation1Enabled = m_robotAnimation1Enabled;
			currentcube.m_robotAnimation2Enabled = m_robotAnimation2Enabled;
			currentcube.m_spiderAnimationEnabled = m_spiderAnimationEnabled;
			currentcube.m_ignoreDamage = m_ignoreDamage;
			currentcube.m_enable22Changes = m_enable22Changes;
			currentcube.m_decreaseBoostSlide = m_decreaseBoostSlide;
			currentcube.m_isLocked = m_isLocked;
			currentcube.m_controlsDisabled = m_controlsDisabled;
			currentcube.m_hasEverJumped = m_hasEverJumped;
			currentcube.m_hasEverHitRing = m_hasEverHitRing;
			currentcube.m_isSecondPlayer = m_isSecondPlayer;
			currentcube.m_defaultMiniIcon = m_defaultMiniIcon;
			currentcube.m_swapColors = m_swapColors;
			currentcube.m_switchDashFireColor = m_switchDashFireColor;

			// Ints
			currentcube.m_lastCollisionBottom = m_lastCollisionBottom;
			currentcube.m_lastCollisionTop = m_lastCollisionTop;
			currentcube.m_lastCollisionLeft = m_lastCollisionLeft;
			currentcube.m_lastCollisionRight = m_lastCollisionRight;
			currentcube.m_unk50C = m_unk50C;
			currentcube.m_unk510 = m_unk510;
			currentcube.m_maybeSavedPlayerFrame = m_maybeSavedPlayerFrame;
			currentcube.m_collidingWithSlopeId = m_collidingWithSlopeId;
			currentcube.m_onFlyCheckpointTries = m_onFlyCheckpointTries;
			currentcube.m_playerStreak = m_playerStreak;
			currentcube.m_followRelated = m_followRelated;
			currentcube.m_stateOnGround = m_stateOnGround;
			currentcube.m_unk9e8 = m_unk9e8;
			currentcube.m_groundObjectMaterial = m_groundObjectMaterial;
			currentcube.m_stateNoAutoJump = m_stateNoAutoJump;
			currentcube.m_stateDartSlide = m_stateDartSlide;
			currentcube.m_stateHitHead = m_stateHitHead;
			currentcube.m_stateFlipGravity = m_stateFlipGravity;
			currentcube.m_stateForce = m_stateForce;
			currentcube.m_stateBoostX = m_stateBoostX;
			currentcube.m_stateBoostY = m_stateBoostY;
			currentcube.m_maybeStateForce2 = m_maybeStateForce2;
			currentcube.m_stateScale = m_stateScale;
			currentcube.m_stateJumpBuffered = m_stateJumpBuffered;
			currentcube.m_stateUnk = m_stateUnk;
			currentcube.m_stateNoStickX = m_stateNoStickX;
			currentcube.m_stateNoStickY = m_stateNoStickY;
			currentcube.m_stateUnk2 = m_stateUnk2;
			currentcube.m_iconRequestID = m_iconRequestID;
			currentcube.m_reverseRelated = m_reverseRelated;
			currentcube.m_maybeSlidingTime = m_maybeSlidingTime;

			// Floats
			currentcube.m_slopeAngle = m_slopeAngle;
			currentcube.m_rotationSpeed = m_rotationSpeed;
			currentcube.m_rotateSpeed = m_rotateSpeed;
			currentcube.m_slopeAngleRadians = m_slopeAngleRadians;
			currentcube.m_trailingParticleLife = m_trailingParticleLife;
			currentcube.m_unk648 = m_unk648;
			currentcube.m_flashRelated = m_flashRelated;
			currentcube.m_flashRelated1 = m_flashRelated1;
			currentcube.m_landParticlesAngle = m_landParticlesAngle;
			currentcube.m_landParticleRelatedY = m_landParticleRelatedY;
			currentcube.m_streakStrokeWidth = m_streakStrokeWidth;
			currentcube.m_vehicleSize = m_vehicleSize;
			currentcube.m_playerSpeed = m_playerSpeed;
			currentcube.m_unkUnused3 = m_unkUnused3;
			currentcube.m_platformerVelocityRelated = m_platformerVelocityRelated;
			currentcube.m_unkAAC = m_unkAAC;
			currentcube.m_unkAngle1 = m_unkAngle1;
			currentcube.m_yVelocityRelated3 = m_yVelocityRelated3;
			currentcube.m_xVelocityRelated2 = m_xVelocityRelated2;
			currentcube.m_xVelocityRelated = m_xVelocityRelated;
			currentcube.m_gravityMod = m_gravityMod;
			currentcube.m_somethingPlayerSpeedTime = m_somethingPlayerSpeedTime;
			currentcube.m_playerSpeedAC = m_playerSpeedAC;
			currentcube.m_slopeVelocity = m_slopeVelocity;

			// Doubles
			currentcube.m_yVelocityBeforeSlope = m_yVelocityBeforeSlope;
			currentcube.m_dashX = m_dashX;
			currentcube.m_dashY = m_dashY;
			currentcube.m_dashAngle = m_dashAngle;
			currentcube.m_dashStartTime = m_dashStartTime;
			currentcube.m_slopeStartTime = m_slopeStartTime;
			currentcube.m_scaleXRelated2 = m_scaleXRelated2;
			currentcube.m_groundYVelocity = m_groundYVelocity;
			currentcube.m_yVelocityRelated = m_yVelocityRelated;
			currentcube.m_scaleXRelated3 = m_scaleXRelated3;
			currentcube.m_scaleXRelated4 = m_scaleXRelated4;
			currentcube.m_scaleXRelated5 = m_scaleXRelated5;
			currentcube.unk_584 = unk_584;
			currentcube.m_speedMultiplier = m_speedMultiplier;
			currentcube.m_yStart = m_yStart;
			currentcube.m_gravity = m_gravity;
			currentcube.m_gameModeChangedTime = m_gameModeChangedTime;
			currentcube.m_lastCheckpointTime = m_lastCheckpointTime;
			currentcube.m_lastJumpTime = m_lastJumpTime;
			currentcube.m_lastFlipTime = m_lastFlipTime;
			currentcube.m_flashTime = m_flashTime;
			currentcube.m_lastSpiderFlipTime = m_lastSpiderFlipTime;
			currentcube.m_accelerationOrSpeed = m_accelerationOrSpeed;
			currentcube.m_snapDistance = m_snapDistance;
			currentcube.m_yVelocity = m_yVelocity;
			currentcube.m_fallSpeed = m_fallSpeed;
			currentcube.m_maybeReverseSpeed = m_maybeReverseSpeed;
			currentcube.m_maybeReverseAcceleration = m_maybeReverseAcceleration;
			currentcube.m_totalTime = m_totalTime;
			currentcube.m_platformerXVelocity = m_platformerXVelocity;
			currentcube.m_scaleXRelated = m_scaleXRelated;
			currentcube.m_maybeSlopeForce = m_maybeSlopeForce;
			currentcube.m_physDeltaRelated = m_physDeltaRelated;
			currentcube.m_maybeSlidingStartTime = m_maybeSlidingStartTime;
			currentcube.m_changedDirectionsTime = m_changedDirectionsTime;
			currentcube.m_slopeEndTime = m_slopeEndTime;
			currentcube.m_slopeRotation = m_slopeRotation;
			currentcube.m_currentSlopeYVelocity = m_currentSlopeYVelocity;
			currentcube.m_unk3d0 = m_unk3d0;
			currentcube.m_blackOrbRelated = m_blackOrbRelated;
			currentcube.m_collidedTopMinY = m_collidedTopMinY;
			currentcube.m_collidedBottomMaxY = m_collidedBottomMaxY;
			currentcube.m_collidedLeftMaxX = m_collidedLeftMaxX;
			currentcube.m_collidedRightMinX = m_collidedRightMinX;

			// CCPoint
			currentcube.m_shipRotation = m_shipRotation;
			currentcube.m_lastPortalPos = m_lastPortalPos;
			currentcube.m_lastGroundedPos = m_lastGroundedPos;
			currentcube.m_position = p0copy;
			currentcube.m_stateForceVector = m_stateForceVector;

			// ccColor3B
			currentcube.m_colorRelated2 = m_colorRelated2;
			currentcube.m_flashRelated3 = m_flashRelated3;
			currentcube.m_colorRelated = m_colorRelated;
			currentcube.m_secondColorRelated = m_secondColorRelated;
			currentcube.m_glowColor = m_glowColor;
			currentcube.m_playerColor1 = m_playerColor1;
			currentcube.m_playerColor2 = m_playerColor2;

			// Enums
			currentcube.m_ghostType = m_ghostType;
			currentcube.m_shipStreakType = m_shipStreakType;

			// Vectors
			currentcube.m_playerFollowFloats = m_playerFollowFloats;

			currentcube.frame = currentframe;

			CBot::m_macro.m_physicsactions.emplace_back(currentcube);
		}

		if (CBot::m_currentstate == CBot::state::PlayBack)
		{
			if (CBot::m_physicsaccuracy == true)
			{
				for (auto& action : CBot::m_macro.m_physicsactions)
				{
					bool FoundTime = action.frame == currentframe;
					if (FoundTime == true)
					{
						if (this->m_isSecondPlayer == true)
						{
							// Bools
							this->m_wasTeleported = action.m_wasTeleported;
							this->m_fixGravityBug = action.m_fixGravityBug;
							this->m_reverseSync = action.m_reverseSync;
							this->m_justPlacedStreak = action.m_justPlacedStreak;
							this->m_slopeSlidingMaybeRotated = action.m_slopeSlidingMaybeRotated;
							this->m_quickCheckpointMode = action.m_quickCheckpointMode;
							this->m_isCollidingWithSlope = action.m_isCollidingWithSlope;
							this->m_isBallRotating = action.m_isBallRotating;
							this->m_unk669 = action.m_unk669;
							this->m_slopeFlipGravityRelated = action.m_slopeFlipGravityRelated;
							this->m_isRotating = action.m_isRotating;
							this->m_isBallRotating2 = action.m_isBallRotating2;
							this->m_hasGlow = action.m_hasGlow;
							this->m_isHidden = action.m_isHidden;
							this->m_padRingRelated = action.m_padRingRelated;
							this->m_maybeReducedEffects = action.m_maybeReducedEffects;
							this->m_maybeIsFalling = action.m_maybeIsFalling;
							this->m_shouldTryPlacingCheckpoint = action.m_shouldTryPlacingCheckpoint;
							this->m_playEffects = action.m_playEffects;
							this->m_maybeCanRunIntoBlocks = action.m_maybeCanRunIntoBlocks;
							this->m_hasGroundParticles = action.m_hasGroundParticles;
							this->m_hasShipParticles = action.m_hasShipParticles;
							this->m_isOnGround3 = action.m_isOnGround3;
							this->m_checkpointTimeout = action.m_checkpointTimeout;
							this->m_unkBool5 = action.m_unkBool5;
							this->m_maybeIsVehicleGlowing = action.m_maybeIsVehicleGlowing;
							this->m_switchWaveTrailColor = action.m_switchWaveTrailColor;
							this->m_practiceDeathEffect = action.m_practiceDeathEffect;
							this->m_ringJumpRelated = action.m_ringJumpRelated;
							this->m_maybeSpriteRelated = action.m_maybeSpriteRelated;
							this->m_useLandParticles0 = action.m_useLandParticles0;
							this->m_disableStreakTint = action.m_disableStreakTint;
							this->m_alwaysShowStreak = action.m_alwaysShowStreak;
							this->m_unk3e0 = action.m_unk3e0;
							this->m_unk3e1 = action.m_unk3e1;
							this->m_isAccelerating = action.m_isAccelerating;
							this->m_isCurrentSlopeTop = action.m_isCurrentSlopeTop;
							this->m_fadeOutStreak = action.m_fadeOutStreak;
							this->m_canPlaceCheckpoint = action.m_canPlaceCheckpoint;
							this->m_hasCustomGlowColor = action.m_hasCustomGlowColor;
							this->m_maybeIsColliding = action.m_maybeIsColliding;
							this->m_jumpBuffered = action.m_jumpBuffered;
							this->m_stateRingJump = action.m_stateRingJump;
							this->m_wasJumpBuffered = action.m_wasJumpBuffered;
							this->m_wasRobotJump = action.m_wasRobotJump;
							this->m_stateRingJump2 = action.m_stateRingJump2;
							this->m_touchedRing = action.m_touchedRing;
							this->m_touchedCustomRing = action.m_touchedCustomRing;
							this->m_touchedGravityPortal = action.m_touchedGravityPortal;
							this->m_maybeTouchedBreakableBlock = action.m_maybeTouchedBreakableBlock;
							this->m_touchedPad = action.m_touchedPad;
							this->m_isOnSlope = action.m_isOnSlope;
							this->m_wasOnSlope = action.m_wasOnSlope;
							this->m_maybeUpsideDownSlope = action.m_maybeUpsideDownSlope;
							this->m_isShip = action.m_isShip;
							this->m_isBird = action.m_isBird;
							this->m_isBall = action.m_isBall;
							this->m_isDart = action.m_isDart;
							this->m_isRobot = action.m_isRobot;
							this->m_isSpider = action.m_isSpider;
							this->m_isUpsideDown = action.m_isUpsideDown;
							this->m_isDead = action.m_isDead;
							this->m_isOnGround = action.m_isOnGround;
							this->m_isGoingLeft = action.m_isGoingLeft;
							this->m_isSideways = action.m_isSideways;
							this->m_isSwing = action.m_isSwing;
							this->m_isDashing = action.m_isDashing;
							this->m_holdingRight = action.m_holdingRight;
							this->m_holdingLeft = action.m_holdingLeft;
							this->m_leftPressedFirst = action.m_leftPressedFirst;
							this->m_maybeHasStopped = action.m_maybeHasStopped;
							this->m_maybeGoingCorrectSlopeDirection = action.m_maybeGoingCorrectSlopeDirection;
							this->m_isSliding = action.m_isSliding;
							this->m_isOnIce = action.m_isOnIce;
							this->m_isOnGround4 = action.m_isOnGround4;
							this->m_isMoving = action.m_isMoving;
							this->m_platformerMovingLeft = action.m_platformerMovingLeft;
							this->m_platformerMovingRight = action.m_platformerMovingRight;
							this->m_isSlidingRight = action.m_isSlidingRight;
							this->m_isPlatformer = action.m_isPlatformer;
							this->m_affectedByForces = action.m_affectedByForces;
							this->m_fixRobotJump = action.m_fixRobotJump;
							this->m_inputsLocked = action.m_inputsLocked;
							this->m_gv0123 = action.m_gv0123;
							this->m_isOutOfBounds = action.m_isOutOfBounds;
							this->m_disablePlayerSqueeze = action.m_disablePlayerSqueeze;
							this->m_robotAnimation1Enabled = action.m_robotAnimation1Enabled;
							this->m_robotAnimation2Enabled = action.m_robotAnimation2Enabled;
							this->m_spiderAnimationEnabled = action.m_spiderAnimationEnabled;
							this->m_ignoreDamage = action.m_ignoreDamage;
							this->m_enable22Changes = action.m_enable22Changes;
							this->m_decreaseBoostSlide = action.m_decreaseBoostSlide;
							this->m_isLocked = action.m_isLocked;
							this->m_controlsDisabled = action.m_controlsDisabled;
							this->m_hasEverJumped = action.m_hasEverJumped;
							this->m_hasEverHitRing = action.m_hasEverHitRing;
							this->m_isSecondPlayer = action.m_isSecondPlayer;
							this->m_defaultMiniIcon = action.m_defaultMiniIcon;
							this->m_swapColors = action.m_swapColors;
							this->m_switchDashFireColor = action.m_switchDashFireColor;

							// Ints
							this->m_lastCollisionBottom = action.m_lastCollisionBottom;
							this->m_lastCollisionTop = action.m_lastCollisionTop;
							this->m_lastCollisionLeft = action.m_lastCollisionLeft;
							this->m_lastCollisionRight = action.m_lastCollisionRight;
							this->m_unk50C = action.m_unk50C;
							this->m_unk510 = action.m_unk510;
							this->m_maybeSavedPlayerFrame = action.m_maybeSavedPlayerFrame;
							this->m_collidingWithSlopeId = action.m_collidingWithSlopeId;
							this->m_onFlyCheckpointTries = action.m_onFlyCheckpointTries;
							this->m_playerStreak = action.m_playerStreak;
							this->m_followRelated = action.m_followRelated;
							this->m_stateOnGround = action.m_stateOnGround;
							this->m_unk9e8 = action.m_unk9e8;
							this->m_groundObjectMaterial = action.m_groundObjectMaterial;
							this->m_stateNoAutoJump = action.m_stateNoAutoJump;
							this->m_stateDartSlide = action.m_stateDartSlide;
							this->m_stateHitHead = action.m_stateHitHead;
							this->m_stateFlipGravity = action.m_stateFlipGravity;
							this->m_stateForce = action.m_stateForce;
							this->m_stateBoostX = action.m_stateBoostX;
							this->m_stateBoostY = action.m_stateBoostY;
							this->m_maybeStateForce2 = action.m_maybeStateForce2;
							this->m_stateScale = action.m_stateScale;
							this->m_stateJumpBuffered = action.m_stateJumpBuffered;
							this->m_stateUnk = action.m_stateUnk;
							this->m_stateNoStickX = action.m_stateNoStickX;
							this->m_stateNoStickY = action.m_stateNoStickY;
							this->m_stateUnk2 = action.m_stateUnk2;
							this->m_iconRequestID = action.m_iconRequestID;
							this->m_reverseRelated = action.m_reverseRelated;
							this->m_maybeSlidingTime = action.m_maybeSlidingTime;

							// Floats
							this->m_slopeAngle = action.m_slopeAngle;
							this->m_rotationSpeed = action.m_rotationSpeed;
							this->m_rotateSpeed = action.m_rotateSpeed;
							this->m_slopeAngleRadians = action.m_slopeAngleRadians;
							this->m_trailingParticleLife = action.m_trailingParticleLife;
							this->m_unk648 = action.m_unk648;
							this->m_flashRelated = action.m_flashRelated;
							this->m_flashRelated1 = action.m_flashRelated1;
							this->m_landParticlesAngle = action.m_landParticlesAngle;
							this->m_landParticleRelatedY = action.m_landParticleRelatedY;
							this->m_streakStrokeWidth = action.m_streakStrokeWidth;
							this->m_vehicleSize = action.m_vehicleSize;
							this->m_playerSpeed = action.m_playerSpeed;
							this->m_unkUnused3 = action.m_unkUnused3;
							this->m_platformerVelocityRelated = action.m_platformerVelocityRelated;
							this->m_unkAAC = action.m_unkAAC;
							this->m_unkAngle1 = action.m_unkAngle1;
							this->m_yVelocityRelated3 = action.m_yVelocityRelated3;
							this->m_xVelocityRelated2 = action.m_xVelocityRelated2;
							this->m_xVelocityRelated = action.m_xVelocityRelated;
							this->m_gravityMod = action.m_gravityMod;
							this->m_somethingPlayerSpeedTime = action.m_somethingPlayerSpeedTime;
							this->m_playerSpeedAC = action.m_playerSpeedAC;
							this->m_slopeVelocity = action.m_slopeVelocity;

							// Doubles
							this->m_yVelocityBeforeSlope = action.m_yVelocityBeforeSlope;
							this->m_dashX = action.m_dashX;
							this->m_dashY = action.m_dashY;
							this->m_dashAngle = action.m_dashAngle;
							this->m_dashStartTime = action.m_dashStartTime;
							this->m_slopeStartTime = action.m_slopeStartTime;
							this->m_scaleXRelated2 = action.m_scaleXRelated2;
							this->m_groundYVelocity = action.m_groundYVelocity;
							this->m_yVelocityRelated = action.m_yVelocityRelated;
							this->m_scaleXRelated3 = action.m_scaleXRelated3;
							this->m_scaleXRelated4 = action.m_scaleXRelated4;
							this->m_scaleXRelated5 = action.m_scaleXRelated5;
							this->unk_584 = action.unk_584;
							this->m_speedMultiplier = action.m_speedMultiplier;
							this->m_yStart = action.m_yStart;
							this->m_gravity = action.m_gravity;
							this->m_gameModeChangedTime = action.m_gameModeChangedTime;
							this->m_lastCheckpointTime = action.m_lastCheckpointTime;
							this->m_lastJumpTime = action.m_lastJumpTime;
							this->m_lastFlipTime = action.m_lastFlipTime;
							this->m_flashTime = action.m_flashTime;
							this->m_lastSpiderFlipTime = action.m_lastSpiderFlipTime;
							this->m_accelerationOrSpeed = action.m_accelerationOrSpeed;
							this->m_snapDistance = action.m_snapDistance;
							this->m_yVelocity = action.m_yVelocity;
							this->m_fallSpeed = action.m_fallSpeed;
							this->m_maybeReverseSpeed = action.m_maybeReverseSpeed;
							this->m_maybeReverseAcceleration = action.m_maybeReverseAcceleration;
							this->m_totalTime = action.m_totalTime;
							this->m_platformerXVelocity = action.m_platformerXVelocity;
							this->m_scaleXRelated = action.m_scaleXRelated;
							this->m_maybeSlopeForce = action.m_maybeSlopeForce;
							this->m_physDeltaRelated = action.m_physDeltaRelated;
							this->m_maybeSlidingStartTime = action.m_maybeSlidingStartTime;
							this->m_changedDirectionsTime = action.m_changedDirectionsTime;
							this->m_slopeEndTime = action.m_slopeEndTime;
							this->m_slopeRotation = action.m_slopeRotation;
							this->m_currentSlopeYVelocity = action.m_currentSlopeYVelocity;
							this->m_unk3d0 = action.m_unk3d0;
							this->m_blackOrbRelated = action.m_blackOrbRelated;
							this->m_collidedTopMinY = action.m_collidedTopMinY;
							this->m_collidedBottomMaxY = action.m_collidedBottomMaxY;
							this->m_collidedLeftMaxX = action.m_collidedLeftMaxX;
							this->m_collidedRightMinX = action.m_collidedRightMinX;

							// CCPoint
							this->m_shipRotation = action.m_shipRotation;
							this->m_lastPortalPos = action.m_lastPortalPos;
							this->m_lastGroundedPos = action.m_lastGroundedPos;
							this->m_position = action.m_position;
							this->m_stateForceVector = action.m_stateForceVector;

							// ccColor3B
							this->m_colorRelated2 = action.m_colorRelated2;
							this->m_flashRelated3 = action.m_flashRelated3;
							this->m_colorRelated = action.m_colorRelated;
							this->m_secondColorRelated = action.m_secondColorRelated;
							this->m_glowColor = action.m_glowColor;
							this->m_playerColor1 = action.m_playerColor1;
							this->m_playerColor2 = action.m_playerColor2;

							// Enums / small structs
							this->m_ghostType = action.m_ghostType;
							this->m_shipStreakType = action.m_shipStreakType;

							// Vectors
							this->m_playerFollowFloats = action.m_playerFollowFloats;


							p0copy = action.m_position;
						}

						if (this->m_isSecondPlayer == false)
						{
							this->m_wasTeleported = action.m_wasTeleported;
							this->m_fixGravityBug = action.m_fixGravityBug;
							this->m_reverseSync = action.m_reverseSync;
							this->m_justPlacedStreak = action.m_justPlacedStreak;
							this->m_slopeSlidingMaybeRotated = action.m_slopeSlidingMaybeRotated;
							this->m_quickCheckpointMode = action.m_quickCheckpointMode;
							this->m_isCollidingWithSlope = action.m_isCollidingWithSlope;
							this->m_isBallRotating = action.m_isBallRotating;
							this->m_unk669 = action.m_unk669;
							this->m_slopeFlipGravityRelated = action.m_slopeFlipGravityRelated;
							this->m_isRotating = action.m_isRotating;
							this->m_isBallRotating2 = action.m_isBallRotating2;
							this->m_hasGlow = action.m_hasGlow;
							this->m_isHidden = action.m_isHidden;
							this->m_padRingRelated = action.m_padRingRelated;
							this->m_maybeReducedEffects = action.m_maybeReducedEffects;
							this->m_maybeIsFalling = action.m_maybeIsFalling;
							this->m_shouldTryPlacingCheckpoint = action.m_shouldTryPlacingCheckpoint;
							this->m_playEffects = action.m_playEffects;
							this->m_maybeCanRunIntoBlocks = action.m_maybeCanRunIntoBlocks;
							this->m_hasGroundParticles = action.m_hasGroundParticles;
							this->m_hasShipParticles = action.m_hasShipParticles;
							this->m_isOnGround3 = action.m_isOnGround3;
							this->m_checkpointTimeout = action.m_checkpointTimeout;
							this->m_unkBool5 = action.m_unkBool5;
							this->m_maybeIsVehicleGlowing = action.m_maybeIsVehicleGlowing;
							this->m_switchWaveTrailColor = action.m_switchWaveTrailColor;
							this->m_practiceDeathEffect = action.m_practiceDeathEffect;
							this->m_ringJumpRelated = action.m_ringJumpRelated;
							this->m_maybeSpriteRelated = action.m_maybeSpriteRelated;
							this->m_useLandParticles0 = action.m_useLandParticles0;
							this->m_disableStreakTint = action.m_disableStreakTint;
							this->m_alwaysShowStreak = action.m_alwaysShowStreak;
							this->m_unk3e0 = action.m_unk3e0;
							this->m_unk3e1 = action.m_unk3e1;
							this->m_isAccelerating = action.m_isAccelerating;
							this->m_isCurrentSlopeTop = action.m_isCurrentSlopeTop;
							this->m_fadeOutStreak = action.m_fadeOutStreak;
							this->m_canPlaceCheckpoint = action.m_canPlaceCheckpoint;
							this->m_hasCustomGlowColor = action.m_hasCustomGlowColor;
							this->m_maybeIsColliding = action.m_maybeIsColliding;
							this->m_jumpBuffered = action.m_jumpBuffered;
							this->m_stateRingJump = action.m_stateRingJump;
							this->m_wasJumpBuffered = action.m_wasJumpBuffered;
							this->m_wasRobotJump = action.m_wasRobotJump;
							this->m_stateRingJump2 = action.m_stateRingJump2;
							this->m_touchedRing = action.m_touchedRing;
							this->m_touchedCustomRing = action.m_touchedCustomRing;
							this->m_touchedGravityPortal = action.m_touchedGravityPortal;
							this->m_maybeTouchedBreakableBlock = action.m_maybeTouchedBreakableBlock;
							this->m_touchedPad = action.m_touchedPad;
							this->m_isOnSlope = action.m_isOnSlope;
							this->m_wasOnSlope = action.m_wasOnSlope;
							this->m_maybeUpsideDownSlope = action.m_maybeUpsideDownSlope;
							this->m_isShip = action.m_isShip;
							this->m_isBird = action.m_isBird;
							this->m_isBall = action.m_isBall;
							this->m_isDart = action.m_isDart;
							this->m_isRobot = action.m_isRobot;
							this->m_isSpider = action.m_isSpider;
							this->m_isUpsideDown = action.m_isUpsideDown;
							this->m_isDead = action.m_isDead;
							this->m_isOnGround = action.m_isOnGround;
							this->m_isGoingLeft = action.m_isGoingLeft;
							this->m_isSideways = action.m_isSideways;
							this->m_isSwing = action.m_isSwing;
							this->m_isDashing = action.m_isDashing;
							this->m_holdingRight = action.m_holdingRight;
							this->m_holdingLeft = action.m_holdingLeft;
							this->m_leftPressedFirst = action.m_leftPressedFirst;
							this->m_maybeHasStopped = action.m_maybeHasStopped;
							this->m_maybeGoingCorrectSlopeDirection = action.m_maybeGoingCorrectSlopeDirection;
							this->m_isSliding = action.m_isSliding;
							this->m_isOnIce = action.m_isOnIce;
							this->m_isOnGround4 = action.m_isOnGround4;
							this->m_isMoving = action.m_isMoving;
							this->m_platformerMovingLeft = action.m_platformerMovingLeft;
							this->m_platformerMovingRight = action.m_platformerMovingRight;
							this->m_isSlidingRight = action.m_isSlidingRight;
							this->m_isPlatformer = action.m_isPlatformer;
							this->m_affectedByForces = action.m_affectedByForces;
							this->m_fixRobotJump = action.m_fixRobotJump;
							this->m_inputsLocked = action.m_inputsLocked;
							this->m_gv0123 = action.m_gv0123;
							this->m_isOutOfBounds = action.m_isOutOfBounds;
							this->m_disablePlayerSqueeze = action.m_disablePlayerSqueeze;
							this->m_robotAnimation1Enabled = action.m_robotAnimation1Enabled;
							this->m_robotAnimation2Enabled = action.m_robotAnimation2Enabled;
							this->m_spiderAnimationEnabled = action.m_spiderAnimationEnabled;
							this->m_ignoreDamage = action.m_ignoreDamage;
							this->m_enable22Changes = action.m_enable22Changes;
							this->m_decreaseBoostSlide = action.m_decreaseBoostSlide;
							this->m_isLocked = action.m_isLocked;
							this->m_controlsDisabled = action.m_controlsDisabled;
							this->m_hasEverJumped = action.m_hasEverJumped;
							this->m_hasEverHitRing = action.m_hasEverHitRing;
							this->m_isSecondPlayer = action.m_isSecondPlayer;
							this->m_defaultMiniIcon = action.m_defaultMiniIcon;
							this->m_swapColors = action.m_swapColors;
							this->m_switchDashFireColor = action.m_switchDashFireColor;

							this->m_lastCollisionBottom = action.m_lastCollisionBottom;
							this->m_lastCollisionTop = action.m_lastCollisionTop;
							this->m_lastCollisionLeft = action.m_lastCollisionLeft;
							this->m_lastCollisionRight = action.m_lastCollisionRight;
							this->m_unk50C = action.m_unk50C;
							this->m_unk510 = action.m_unk510;
							this->m_maybeSavedPlayerFrame = action.m_maybeSavedPlayerFrame;
							this->m_collidingWithSlopeId = action.m_collidingWithSlopeId;
							this->m_onFlyCheckpointTries = action.m_onFlyCheckpointTries;
							this->m_playerStreak = action.m_playerStreak;
							this->m_followRelated = action.m_followRelated;
							this->m_stateOnGround = action.m_stateOnGround;
							this->m_unk9e8 = action.m_unk9e8;
							this->m_groundObjectMaterial = action.m_groundObjectMaterial;
							this->m_stateNoAutoJump = action.m_stateNoAutoJump;
							this->m_stateDartSlide = action.m_stateDartSlide;
							this->m_stateHitHead = action.m_stateHitHead;
							this->m_stateFlipGravity = action.m_stateFlipGravity;
							this->m_stateForce = action.m_stateForce;
							this->m_stateBoostX = action.m_stateBoostX;
							this->m_stateBoostY = action.m_stateBoostY;
							this->m_maybeStateForce2 = action.m_maybeStateForce2;
							this->m_stateScale = action.m_stateScale;
							this->m_stateJumpBuffered = action.m_stateJumpBuffered;
							this->m_stateUnk = action.m_stateUnk;
							this->m_stateNoStickX = action.m_stateNoStickX;
							this->m_stateNoStickY = action.m_stateNoStickY;
							this->m_stateUnk2 = action.m_stateUnk2;
							this->m_iconRequestID = action.m_iconRequestID;
							this->m_reverseRelated = action.m_reverseRelated;
							this->m_maybeSlidingTime = action.m_maybeSlidingTime;

							// Floats
							this->m_slopeAngle = action.m_slopeAngle;
							this->m_rotationSpeed = action.m_rotationSpeed;
							this->m_rotateSpeed = action.m_rotateSpeed;
							this->m_slopeAngleRadians = action.m_slopeAngleRadians;
							this->m_trailingParticleLife = action.m_trailingParticleLife;
							this->m_unk648 = action.m_unk648;
							this->m_flashRelated = action.m_flashRelated;
							this->m_flashRelated1 = action.m_flashRelated1;
							this->m_landParticlesAngle = action.m_landParticlesAngle;
							this->m_landParticleRelatedY = action.m_landParticleRelatedY;
							this->m_streakStrokeWidth = action.m_streakStrokeWidth;
							this->m_vehicleSize = action.m_vehicleSize;
							this->m_playerSpeed = action.m_playerSpeed;
							this->m_unkUnused3 = action.m_unkUnused3;
							this->m_platformerVelocityRelated = action.m_platformerVelocityRelated;
							this->m_unkAAC = action.m_unkAAC;
							this->m_unkAngle1 = action.m_unkAngle1;
							this->m_yVelocityRelated3 = action.m_yVelocityRelated3;
							this->m_xVelocityRelated2 = action.m_xVelocityRelated2;
							this->m_xVelocityRelated = action.m_xVelocityRelated;
							this->m_gravityMod = action.m_gravityMod;
							this->m_somethingPlayerSpeedTime = action.m_somethingPlayerSpeedTime;
							this->m_playerSpeedAC = action.m_playerSpeedAC;
							this->m_slopeVelocity = action.m_slopeVelocity;

							// Doubles
							this->m_yVelocityBeforeSlope = action.m_yVelocityBeforeSlope;
							this->m_dashX = action.m_dashX;
							this->m_dashY = action.m_dashY;
							this->m_dashAngle = action.m_dashAngle;
							this->m_dashStartTime = action.m_dashStartTime;
							this->m_slopeStartTime = action.m_slopeStartTime;
							this->m_scaleXRelated2 = action.m_scaleXRelated2;
							this->m_groundYVelocity = action.m_groundYVelocity;
							this->m_yVelocityRelated = action.m_yVelocityRelated;
							this->m_scaleXRelated3 = action.m_scaleXRelated3;
							this->m_scaleXRelated4 = action.m_scaleXRelated4;
							this->m_scaleXRelated5 = action.m_scaleXRelated5;
							this->unk_584 = action.unk_584;
							this->m_speedMultiplier = action.m_speedMultiplier;
							this->m_yStart = action.m_yStart;
							this->m_gravity = action.m_gravity;
							this->m_gameModeChangedTime = action.m_gameModeChangedTime;
							this->m_lastCheckpointTime = action.m_lastCheckpointTime;
							this->m_lastJumpTime = action.m_lastJumpTime;
							this->m_lastFlipTime = action.m_lastFlipTime;
							this->m_flashTime = action.m_flashTime;
							this->m_lastSpiderFlipTime = action.m_lastSpiderFlipTime;
							this->m_accelerationOrSpeed = action.m_accelerationOrSpeed;
							this->m_snapDistance = action.m_snapDistance;
							this->m_yVelocity = action.m_yVelocity;
							this->m_fallSpeed = action.m_fallSpeed;
							this->m_maybeReverseSpeed = action.m_maybeReverseSpeed;
							this->m_maybeReverseAcceleration = action.m_maybeReverseAcceleration;
							this->m_totalTime = action.m_totalTime;
							this->m_platformerXVelocity = action.m_platformerXVelocity;
							this->m_scaleXRelated = action.m_scaleXRelated;
							this->m_maybeSlopeForce = action.m_maybeSlopeForce;
							this->m_physDeltaRelated = action.m_physDeltaRelated;
							this->m_maybeSlidingStartTime = action.m_maybeSlidingStartTime;
							this->m_changedDirectionsTime = action.m_changedDirectionsTime;
							this->m_slopeEndTime = action.m_slopeEndTime;
							this->m_slopeRotation = action.m_slopeRotation;
							this->m_currentSlopeYVelocity = action.m_currentSlopeYVelocity;
							this->m_unk3d0 = action.m_unk3d0;
							this->m_blackOrbRelated = action.m_blackOrbRelated;
							this->m_collidedTopMinY = action.m_collidedTopMinY;
							this->m_collidedBottomMaxY = action.m_collidedBottomMaxY;
							this->m_collidedLeftMaxX = action.m_collidedLeftMaxX;
							this->m_collidedRightMinX = action.m_collidedRightMinX;

							// CCPoint
							this->m_shipRotation = action.m_shipRotation;
							this->m_lastPortalPos = action.m_lastPortalPos;
							this->m_lastGroundedPos = action.m_lastGroundedPos;
							this->m_position = action.m_position;
							this->m_stateForceVector = action.m_stateForceVector;

							// ccColor3B
							this->m_colorRelated2 = action.m_colorRelated2;
							this->m_flashRelated3 = action.m_flashRelated3;
							this->m_colorRelated = action.m_colorRelated;
							this->m_secondColorRelated = action.m_secondColorRelated;
							this->m_glowColor = action.m_glowColor;
							this->m_playerColor1 = action.m_playerColor1;
							this->m_playerColor2 = action.m_playerColor2;

							// Enums / small structs
							this->m_ghostType = action.m_ghostType;
							this->m_shipStreakType = action.m_shipStreakType;

							// Vectors
							this->m_playerFollowFloats = action.m_playerFollowFloats;


							p0copy = action.m_position;
						}
					}
				}
			}
				for (auto& action : CBot::m_macro.m_inputactions)
				{
					bool FoundTime = action.frame == currentframe;
					if (FoundTime == true)
					{
						PlayLayer::get()->handleButton(action.hold, (int)action.playerbutton, action.player1);
					}
				}
			
		}

		PlayerObject::setPosition(p0copy);
	}

	bool pushButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (CBot::m_player2_clickpack_path != "" && this->m_isSecondPlayer == true)
			{
				
				float RandomVolume = random::floatRandom(CBot::m_minVolume, CBot::m_maxVolume);
				float RandomPitch = random::floatRandom(CBot::m_minPitch, CBot::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(CBot::m_player2_clickpack_path, CBot::m_player2_softclicks, CBot::m_player2_hardclicks, true);
				
				int RandomIntClick = random::intRandom(0, CBot::m_Player2SizeClickAudios[currentClicktype]);
				std::string currentclickpath = CBot::m_Player2ClickAudios[{currentClicktype, RandomIntClick}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (CBot::m_player1_clickpack_path != "" && this->m_isSecondPlayer == false)
			{
				float RandomVolume = random::floatRandom(CBot::m_minVolume, CBot::m_maxVolume);
				float RandomPitch = random::floatRandom(CBot::m_minPitch, CBot::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(CBot::m_player1_clickpack_path, CBot::m_player1_softclicks, CBot::m_player1_hardclicks, true);
				int RandomIntClick = random::intRandom(0, CBot::m_Player1SizeClickAudios[currentClicktype]);
				std::string currentclickpath = CBot::m_Player1ClickAudios[{currentClicktype, RandomIntClick}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (CBot::m_currentstate == CBot::state::Recording)
			{
				int currentframe = PlayLayer::get()->m_gameState.m_levelTime * (double)CBot::m_tps;
				CBot::m_macro.m_inputactions.push_back(CBot::action(true, !this->m_isSecondPlayer, currentframe, playerButton));
			}

			input::m_playerinput = false;
		}

			return PlayerObject::pushButton(playerButton);
		
	}

	bool releaseButton(PlayerButton playerButton)
	{
		if (input::m_playerinput == true)
		{
			if (CBot::m_player2_clickpack_path != "" && this->m_isSecondPlayer == true)
			{
				float RandomVolume = random::floatRandom(CBot::m_minVolume, CBot::m_maxVolume);
				float RandomPitch = random::floatRandom(CBot::m_minPitch, CBot::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(CBot::m_player2_clickpack_path, CBot::m_player2_softclicks, CBot::m_player2_hardclicks, false);
				int RandomIntClick = random::intRandom(0, CBot::m_Player2SizeClickAudios[currentClicktype]);
				std::string currentclickpath = CBot::m_Player2ClickAudios[{currentClicktype, RandomIntClick}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}

			if (CBot::m_player1_clickpack_path != "" && this->m_isSecondPlayer == false)
			{
				float RandomVolume = random::floatRandom(CBot::m_minVolume, CBot::m_maxVolume);
				float RandomPitch = random::floatRandom(CBot::m_minPitch, CBot::m_maxPitch);

				ClickType currentClicktype = CBot::CheckClickType(CBot::m_player1_clickpack_path, CBot::m_player1_softclicks, CBot::m_player1_hardclicks, false);
				int RandomIntClick = random::intRandom(0, CBot::m_Player1SizeClickAudios[currentClicktype]);
				std::string currentclickpath = CBot::m_Player1ClickAudios[{currentClicktype, RandomIntClick}].clickpathfilename;

				CBot::fmodengine::playSound(currentclickpath, RandomPitch, RandomVolume);
			}
			if (CBot::m_currentstate == CBot::state::Recording)
			{
				int currentframe = PlayLayer::get()->m_gameState.m_levelTime * (double)CBot::m_tps;
				CBot::m_macro.m_inputactions.push_back(CBot::action(false, !this->m_isSecondPlayer, currentframe, playerButton));
			}

			input::m_playerinput = false;
		}

			return PlayerObject::releaseButton(playerButton);
		
	}
		
};
