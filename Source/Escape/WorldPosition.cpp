// MIT License

#include "WorldPosition.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	const AActor* owner = GetOwner();
	const FString owner_name = owner->GetName();
	const FString textual_actor_location = owner->GetActorLocation().ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("Escape>> %s is located at %s"), *owner_name, *textual_actor_location);
}

// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
