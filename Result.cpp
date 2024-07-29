#include "Result.h"

void Result::Initialize()
{
	
}

void Result::Update()
{
	/*Matrix4x4 worldMatrix = MakeAffineMatrix({ 1.0f, 1.0f,1.0f }, { 0,0,0 }, { 0,0,0 });
	Matrix4x4 cameraMatrix = MakeAffineMatrix({ 1.0f,1.0f,1.0f }, cameraRotate, cameraTranslate);
	Matrix4x4 viewMatrix = Inverse(cameraMatrix);
	Matrix4x4 projectionMatrix = MakePerspectiveFovMatrix(0.45f, float(kWindowWidth) / float(kWindowHeight), 0.1f, 100.f);
	Matrix4x4 viewMatrixProjectionMatrix = Multiply(viewMatrix, projectionMatrix);
	Matrix4x4 worldViewProjectionMatrix = Multiply(worldMatrix, viewMatrixProjectionMatrix);
	Matrix4x4 viewportMatrix = MakeViewportMatrix(0, 0, float(kWindowWidth), float(kWindowHeight), 0.0f, 1.0f);*/
	//Vector3 start = Transform(Transform(segment.origin, viewMatrixProjectionMatrix), viewportMatrix);
	//Vector3 end =Transform(Transform(Add(segment.origin, segment.diff), viewMatrixProjectionMatrix), viewportMatrix);


}

void Result::Draw()
{
	DrawGrid(viewMatrixProjectionMatrix, viewportMatrix);

		//DrawSphere(sphere, viewMatrixProjectionMatrix, viewportMatrix, sphere.color);
		//DrawSphere(closestPointSphere, viewMatrixProjectionMatrix, viewportMatrix, WHITE);
		//DrawSphere(sphere, viewMatrixProjectionMatrix, viewportMatrix, sphere.color);
		//DrawSphere(sphere2, viewMatrixProjectionMatrix, viewportMatrix, sphere2.color);
		/*if(IsCollision(sphere, plane))
		{
			sphere.color = RED;
		}
		else {
			sphere.color = WHITE;

		}*/
		//DrawTriangle(triangle, viewMatrixProjectionMatrix, viewportMatrix, triangle.color);
		//Novice::DrawLine((int)start.x, (int)start.y, (int)end.x, (int)end.y, segment.color);

		//DrawAABB(aabb1, viewMatrixProjectionMatrix, viewportMatrix, aabb1.color);

	DrawBezier(controlPoints[0], controlPoints[1], controlPoints[2], viewMatrixProjectionMatrix, viewportMatrix, BLUE);

	ImGui::Begin("Window");
	ImGui::DragFloat3("CameraTranslate", &cameraTranslate.x, 0.01f);
	ImGui::DragFloat3("CameraRotate", &cameraRotate.x, 0.01f);
	ImGui::DragFloat3("point0", &controlPoints[0].x, 0.01f);
	ImGui::DragFloat3("point1", &controlPoints[1].x, 0.01f);
	ImGui::DragFloat3("point2", &controlPoints[2].x, 0.01f);
	//ImGui::DragFloat3("Line difference", &segment.diff.x, 0.01f);
	//ImGui::DragFloat3("aabb1 min", &aabb1.min.x, 0.01f);
	//ImGui::DragFloat3("aabb1 max", &aabb1.max.x, 0.01f);
	//ImGui::DragFloat3("aabb2 min", &aabb2.min.x, 0.01f);
	//ImGui::DragFloat3("aabb2 max", &aabb2.max.x, 0.01f);
	//ImGui::DragFloat3("Triangle 2", &triangle.vertices[2].x, 0.01f);
	//ImGui::DragFloat3("Line", &segment.origin.x, 0.01f);
	//ImGui::DragFloat3("Line diff", &segment.diff.x, 0.01f);
	ImGui::End();
}
