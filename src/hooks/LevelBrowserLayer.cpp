#include <Geode/modify/LevelBrowserLayer.hpp>

using namespace geode::prelude;

// ByteGDPS Demonlist: паков нет, кнопка убрана.
class $modify(IDLevelBrowserLayer, LevelBrowserLayer) {
    bool init(GJSearchObject* object) {
        if (!LevelBrowserLayer::init(object)) return false;
        return true;
    }
};
