#include <Geode/modify/LevelBrowserLayer.hpp>

using namespace geode::prelude;

class $modify(IDLevelBrowserLayer, LevelBrowserLayer) {
    bool init(GJSearchObject* object) {
        if (!LevelBrowserLayer::init(object)) return false;
        return true;
    }
};
