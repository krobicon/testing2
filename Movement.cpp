#pragma once
struct Movement {
    ConfigLoader* cl;
    XDisplay* display;
    Level* level;
    LocalPlayer* localPlayer;

    FloatVector2D previous_weaponPunchAngles;

    Movement(ConfigLoader* cl, XDisplay* display, Level* level, LocalPlayer* localPlayer) {
        this->cl = cl;
        this->display = display;
        this->level = level;
        this->localPlayer = localPlayer;
    }

    void autoTapstrafe(int counter) {
        if (localPlayer->isGrounded() && counter%100 == 0) {
            printf("not grounded.. \n");
            display->pressW();
        }
        /*if (display->keyDown("XK_w")){
            printf("w.. \n");
        }*/
        //bool keyDown(std::string XK_keyName) {
        //KeySym keyCode = XStringToKeysym(trimXKPrefix(XK_keyName).c_str());
        //return keyDown(keyCode);
        //}
    }
};
