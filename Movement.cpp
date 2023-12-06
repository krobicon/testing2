#pragma once
struct Movement {
    ConfigLoader* cl;
    XDisplay* display;
    Level* level;
    LocalPlayer* localPlayer;

    bool jumpstart = false;
    int strafeTick;
    float startjumpTime = 0;
    bool gliding = false;
    bool longclimb = false;
    float previousTraversal;
    int superglideTimer;
    bool superglideStart = false;
    float onWallOffTmp;
    float onWallTmp;
    int wallJumpNow;
    bool startSg = false;
    float superglideCooldown;
    bool bunnyhop = false;
    float bhopTick = 0;

    Movement(ConfigLoader* cl, XDisplay* display, Level* level, LocalPlayer* localPlayer) {
        this->cl = cl;
        this->display = display;
        this->level = level;
        this->localPlayer = localPlayer;
    }

    void autoTapstrafe(int counter) {
    	if (localPlayer->isClimbing()) {
    		auto climbTime = localPlayer->localTime - localPlayer->wallrunStart;
    		if (climbTime > 0.8) {
    			longclimb = true;
    			return;	
    		}
    	}
    	if (longclimb) {
    		if (localPlayer->localTime > localPlayer->wallrunClear + 0.1)
    			longclimb = false;
    	}
    	// auto tap trafe
    	if (!localPlayer->isGrounded() && !localPlayer->inSkydive && !longclimb && !localPlayer->inBackward)
    	{
    		if (jumpstart == false) {
    			jumpstart = true;
    			strafeTick = 0;
    		}
    		else if ((localPlayer->inDuck && localPlayer->jumpDown != 65) || (strafeTick > 7 && strafeTick < 125 && localPlayer->forwardDown == 33)) { //previously 33
    			if (localPlayer->forwardState == 0) {
    				localPlayer->setForwardState(5);
    				//printf("Forward State set:[%d] \n", m_localPlayer->getForwardState());
    			}
    			else {
    				localPlayer->setForwardState(4);
    			}
    		}
    		strafeTick++;
    	}        
    	else if (jumpstart == true && localPlayer->isGrounded()) {
    		jumpstart = false;
    		strafeTick = 0;
    		if (localPlayer->forwardDown == 0) {
    			localPlayer->setForwardState(0);
    		}
    		else if (localPlayer->forwardDown == 33) {
    			localPlayer->setForwardState(1);
    		}
    	}        
        //if (!localPlayer->isGrounded() && counter%10 == 0) {
            //printf("grounded.. \n");
            //display->pressW();
            /*if (!wDown) {
                display->pressW();
                wDown = true;
            }
            else if (wDown) {
                display->releaseW();
                wDown = false;
            }*/
        //}
        /*if (display->keyDown("XK_w")){
            printf("w.. \n");
        }*/
        //bool keyDown(std::string XK_keyName) {
        //KeySym keyCode = XStringToKeysym(trimXKPrefix(XK_keyName).c_str());
        //return keyDown(keyCode);
        //}
    }
};
