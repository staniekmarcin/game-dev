// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "Saving/PainterSaveGame.h"

#include "Stroke.generated.h"

UCLASS()
class VR_LIGHTPAINTER_API AStroke : public AActor
{
	GENERATED_BODY()
	
public:	
	AStroke();
	
	void Update(FVector CursorLocation);

	FStrokeState SerializeToStruct() const;
	static AStroke* SpawnAndDeserializedFromStruct(UWorld* World, const FStrokeState& StrokeState);

private:

	FTransform GetNextSegmentTransform(FVector CurrentLocation) const;

	FTransform GetNextJointTransform(FVector CurrentLocation) const;

	FVector GetNextSegmentScale(FVector CurrentLocation) const;
	FQuat GetNextSegmentRotation(FVector CurrentLocation) const;
	FVector GetNextSegmentLocation(FVector CurrentLocation) const;

	// Components
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	// Config

	UPROPERTY(VisibleAnywhere)
	UInstancedStaticMeshComponent* StrokeMeshes;

	UPROPERTY(VisibleAnywhere)
	UInstancedStaticMeshComponent* JointMeshes;

	//UPROPERTY(VisibleAnywhere)


	// State
	FVector PreviousCursorLocation;

	TArray<FVector> ControlPoints;

};
