#include <iostream>

using std::cout;
using std::endl;

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

IGameObject* CreateGameObjectFactory(GameObjectType type)
{
    switch(type)
    {
        case GameObjectType::Plane:
            return new Plane();
        case GameObjectType::Boat:
            return new Boat();

        default:
            return nullptr;
    }
};

int main()
{


    return 0;
}