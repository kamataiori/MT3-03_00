#pragma once
#include "MathFunc.h"

//static const int kWindowWidth = 1280;
//static const int kWindowHeight = 720;

class Result
{
public:


	Vector3 controlPoints[3]
	{
		{-0.8f, 0.58f, 1.0f},
		{1.76f, 1.0f, -0.3f},
		{0.94f, -0.7f, 2.3f}
	};

	Vector3 cameraRotate{ 0.26f, 0.0f, 0.0f };
	Vector3 cameraTranslate{ 0.0f,1.9f, -6.49f };
	Vector3 cameraPosition = { 0,0,-10.0f };

	
	Matrix4x4 worldMatrix = MakeAffineMatrix({ 1.0f, 1.0f,1.0f }, { 0,0,0 }, { 0,0,0 });
	Matrix4x4 cameraMatrix = MakeAffineMatrix({ 1.0f,1.0f,1.0f }, cameraRotate, cameraTranslate);
	Matrix4x4 viewMatrix = Inverse(cameraMatrix);
	Matrix4x4 projectionMatrix = MakePerspectiveFovMatrix(0.45f, float(kWindowWidth) / float(kWindowHeight), 0.1f, 100.f);
	Matrix4x4 viewMatrixProjectionMatrix = Multiply(viewMatrix, projectionMatrix);
	Matrix4x4 worldViewProjectionMatrix = Multiply(worldMatrix, viewMatrixProjectionMatrix);
	Matrix4x4 viewportMatrix = MakeViewportMatrix(0, 0, float(kWindowWidth), float(kWindowHeight), 0.0f, 1.0f);







	void Initialize();

	void Update();

	void Draw();
};

