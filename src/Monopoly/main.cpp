

#include "Tungsten.h"

std::unique_ptr<Tungsten::Camera> mainCamera;

void Update()
{
    Tungsten::Renderer::StartScene(mainCamera->GetProjection());

    Tungsten::Renderer::DrawCube(glm::vec3(0), glm::vec3(1), glm::vec3(1,0,1));
    Tungsten::Renderer::DrawCube(glm::vec3(1,1.2,0), glm::vec3(1, 2, 1), glm::vec3(0,1,1));
}

int main()
{
    Tungsten::Engine engine("Monopoly");

    mainCamera = std::make_unique<Tungsten::Camera>();

    engine.Run(&Update);


    return 0;
}
