#include <iostream>
#include <memory>

using std::cout;
using std::endl;

using std::unique_ptr;
using std::make_unique;

enum class GameObjectType
{
    Plane,
    Boat
};

class IGameObject{

    public:

        virtual ~IGameObject() = default;
        virtual void Update() = 0;
        virtual void Render() = 0;
};

class Plane : public IGameObject{

    public:

        Plane() {}
        void Update() override 
        {

        }

        void Render() override
        {

        }


};

class Boat : public IGameObject{

    public:

        Boat() {}
        void Update() override 
        {

        }

        void Render() override
        {

        }
};

unique_ptr<IGameObject> CreateGameObjectFactory(GameObjectType type)
{
    switch(type)
    {
        case GameObjectType::Plane:
            return make_unique<Plane>();
        case GameObjectType::Boat:
            return make_unique<Boat>();
        default:
            return nullptr;
    }
};

int main()
{
    unique_ptr<IGameObject> plane = CreateGameObjectFactory(GameObjectType::Plane);
    unique_ptr<IGameObject> boat = CreateGameObjectFactory(GameObjectType::Boat);


    return 0;
}