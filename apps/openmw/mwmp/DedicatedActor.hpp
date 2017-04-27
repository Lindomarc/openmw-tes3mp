#ifndef OPENMW_DEDICATEDACTOR_HPP
#define OPENMW_DEDICATEDACTOR_HPP

#include <components/openmw-mp/Base/BaseActor.hpp>
#include "../mwmechanics/aisequence.hpp"
#include "../mwworld/manualref.hpp"

namespace mwmp
{
    class DedicatedActor : public BaseActor
    {
    public:

        DedicatedActor();
        virtual ~DedicatedActor();

        void update(float dt);
        void setCell(MWWorld::CellStore *cellStore);
        void move(float dt);
        void setAnimFlags();
        void playAnimation();
        void playSound();
        void setStatsDynamic();

        MWWorld::Ptr getPtr();
        void setPtr(const MWWorld::Ptr& newPtr);

        bool hasStatsDynamicData;

    private:
        MWWorld::Ptr ptr;

        bool hasChangedCell;
    };
}

#endif //OPENMW_DEDICATEDACTOR_HPP