#pragma once

namespace CBot
{
	struct action
	{
		bool hold;
		bool player1;
        int frame;
		PlayerButton playerbutton;
	};

    struct physicsaction {
        // bools
        bool m_wasTeleported;
        bool m_fixGravityBug;
        bool m_reverseSync;
        bool m_justPlacedStreak;
        bool m_slopeSlidingMaybeRotated;
        bool m_quickCheckpointMode;
        bool m_isCollidingWithSlope;
        bool m_isBallRotating;
        bool m_unk669;
        bool m_slopeFlipGravityRelated;
        bool m_isRotating;
        bool m_isBallRotating2;
        bool m_hasGlow;
        bool m_isHidden;
        bool m_padRingRelated;
        bool m_maybeReducedEffects;
        bool m_maybeIsFalling;
        bool m_shouldTryPlacingCheckpoint;
        bool m_playEffects;
        bool m_maybeCanRunIntoBlocks;
        bool m_hasGroundParticles;
        bool m_hasShipParticles;
        bool m_isOnGround3;
        bool m_checkpointTimeout;
        bool m_unkBool5;
        bool m_maybeIsVehicleGlowing;
        bool m_switchWaveTrailColor;
        bool m_practiceDeathEffect;
        bool m_ringJumpRelated;
        bool m_maybeSpriteRelated;
        bool m_useLandParticles0;
        bool m_disableStreakTint;
        bool m_alwaysShowStreak;
        bool m_unk3e0;
        bool m_unk3e1;
        bool m_isAccelerating;
        bool m_isCurrentSlopeTop;
        bool m_fadeOutStreak;
        bool m_canPlaceCheckpoint;
        bool m_hasCustomGlowColor;
        bool m_maybeIsColliding;
        bool m_jumpBuffered;
        bool m_stateRingJump;
        bool m_wasJumpBuffered;
        bool m_wasRobotJump;
        bool m_stateRingJump2;
        bool m_touchedRing;
        bool m_touchedCustomRing;
        bool m_touchedGravityPortal;
        bool m_maybeTouchedBreakableBlock;
        bool m_touchedPad;
        bool m_isOnSlope;
        bool m_wasOnSlope;
        bool m_maybeUpsideDownSlope;
        bool m_isShip;
        bool m_isBird;
        bool m_isBall;
        bool m_isDart;
        bool m_isRobot;
        bool m_isSpider;
        bool m_isUpsideDown;
        bool m_isDead;
        bool m_isOnGround;
        bool m_isGoingLeft;
        bool m_isSideways;
        bool m_isSwing;
        bool m_isDashing;
        bool m_holdingRight;
        bool m_holdingLeft;
        bool m_leftPressedFirst;
        bool m_maybeHasStopped;
        bool m_maybeGoingCorrectSlopeDirection;
        bool m_isSliding;
        bool m_isOnIce;
        bool m_isOnGround4;
        bool m_isMoving;
        bool m_platformerMovingLeft;
        bool m_platformerMovingRight;
        bool m_isSlidingRight;
        bool m_isPlatformer;
        bool m_affectedByForces;
        bool m_fixRobotJump;
        bool m_inputsLocked;
        bool m_gv0123;
        bool m_isOutOfBounds;
        bool m_disablePlayerSqueeze;
        bool m_robotAnimation1Enabled;
        bool m_robotAnimation2Enabled;
        bool m_spiderAnimationEnabled;
        bool m_ignoreDamage;
        bool m_enable22Changes;
        bool m_decreaseBoostSlide;
        bool m_isLocked;
        bool m_controlsDisabled;
        bool m_hasEverJumped;
        bool m_hasEverHitRing;
        bool m_isSecondPlayer;
        bool m_defaultMiniIcon;
        bool m_swapColors;
        bool m_switchDashFireColor;

        // ints
        int m_lastCollisionBottom;
        int m_lastCollisionTop;
        int m_lastCollisionLeft;
        int m_lastCollisionRight;
        int m_unk50C;
        int m_unk510;
        int m_maybeSavedPlayerFrame;
        int m_collidingWithSlopeId;
        int m_onFlyCheckpointTries;
        int m_playerStreak;
        int m_followRelated;
        int m_stateOnGround;
        int m_unk9e8;
        int m_groundObjectMaterial;
        int m_stateNoAutoJump;
        int m_stateDartSlide;
        int m_stateHitHead;
        int m_stateFlipGravity;
        int m_stateForce;
        int m_stateBoostX;
        int m_stateBoostY;
        int m_maybeStateForce2;
        int m_stateScale;
        unsigned char m_stateJumpBuffered;
        unsigned char m_stateUnk;
        unsigned char m_stateNoStickX;
        unsigned char m_stateNoStickY;
        unsigned char m_stateUnk2;
        int m_iconRequestID;
        int m_reverseRelated;
        int m_maybeSlidingTime;

        // floats
        float m_slopeAngle;
        float m_rotationSpeed;
        float m_rotateSpeed;
        float m_slopeAngleRadians;
        float m_trailingParticleLife;
        float m_unk648;
        float m_flashRelated;
        float m_flashRelated1;
        float m_landParticlesAngle;
        float m_landParticleRelatedY;
        float m_streakStrokeWidth;
        float m_vehicleSize;
        float m_playerSpeed;
        float m_unkUnused3;
        float m_platformerVelocityRelated;
        float m_unkAAC;
        float m_unkAngle1;
        float m_yVelocityRelated3;
        float m_xVelocityRelated2;
        float m_xVelocityRelated;
        float m_gravityMod;
        float m_somethingPlayerSpeedTime;
        float m_playerSpeedAC;
        float m_slopeVelocity;

        // doubles
        double m_yVelocityBeforeSlope;
        double m_dashX;
        double m_dashY;
        double m_dashAngle;
        double m_dashStartTime;
        double m_slopeStartTime;
        double m_scaleXRelated2;
        double m_groundYVelocity;
        double m_yVelocityRelated;
        double m_scaleXRelated3;
        double m_scaleXRelated4;
        double m_scaleXRelated5;
        double unk_584;
        double m_speedMultiplier;
        double m_yStart;
        double m_gravity;
        double m_gameModeChangedTime;
        double m_lastCheckpointTime;
        double m_lastJumpTime;
        double m_lastFlipTime;
        double m_flashTime;
        double m_lastSpiderFlipTime;
        double m_accelerationOrSpeed;
        double m_snapDistance;
        double m_yVelocity;
        double m_fallSpeed;
        double m_maybeReverseSpeed;
        double m_maybeReverseAcceleration;
        double m_totalTime;
        double m_platformerXVelocity;
        double m_scaleXRelated;
        double m_maybeSlopeForce;
        double m_physDeltaRelated;
        double m_maybeSlidingStartTime;
        double m_changedDirectionsTime;
        double m_slopeEndTime;
        double m_slopeRotation;
        double m_currentSlopeYVelocity;
        double m_unk3d0;
        double m_blackOrbRelated;
        double m_collidedTopMinY;
        double m_collidedBottomMaxY;
        double m_collidedLeftMaxX;
        double m_collidedRightMinX;

        // CCPoint structs
        cocos2d::CCPoint m_shipRotation;
        cocos2d::CCPoint m_lastPortalPos;
        cocos2d::CCPoint m_lastGroundedPos;
        cocos2d::CCPoint m_position;
        cocos2d::CCPoint m_stateForceVector;

        // ccColor3B structs
        cocos2d::ccColor3B m_colorRelated2;
        cocos2d::ccColor3B m_flashRelated3;
        cocos2d::ccColor3B m_colorRelated;
        cocos2d::ccColor3B m_secondColorRelated;
        cocos2d::ccColor3B m_glowColor;
        cocos2d::ccColor3B m_playerColor1;
        cocos2d::ccColor3B m_playerColor2;

        // enums / small structs
        GhostType m_ghostType;
        ShipStreak m_shipStreakType;

        // vectors / unordered containers of primitive types
        gd::vector<float> m_playerFollowFloats;

        int frame;
    };


	enum class state
	{
		None = 0,
		Recording,
		PlayBack
	};

	struct macro
	{
		std::vector<action> m_inputactions;
        std::vector<physicsaction> m_physicsactions;

		void save(std::string filename);
		void load(std::string filename);
	};
}