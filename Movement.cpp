#pragma once
struct Movement {
    ConfigLoader* cl;
    XDisplay* display;
    Level* level;
    LocalPlayer* localPlayer;
    int i = 1;

    bool wDown = false;

    Movement(ConfigLoader* cl, XDisplay* display, Level* level, LocalPlayer* localPlayer) {
        this->cl = cl;
        this->display = display;
        this->level = level;
        this->localPlayer = localPlayer;
    }

    void autoTapstrafe(int counter) {
        if (localPlayer->isGrounded() && counter%300 == 0) {
            printf("grounded.. i is [%d] \n",i);
            display->pressW(i);
            i++;
            /*if (!wDown) {
                display->pressW();
                wDown = true;
            }
            else if (wDown) {
                display->releaseW();
                wDown = false;
            }*/
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
