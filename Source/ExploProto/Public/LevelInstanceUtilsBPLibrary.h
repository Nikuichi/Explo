#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelInstanceUtilsBPLibrary.generated.h"

class ALevelInstance;

UCLASS()
class EXPLOPROTO_API ULevelInstanceUtilsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Renvoie la liste de tous les acteurs appartenant à l'instance de niveau spécifiée.
	 */
	UFUNCTION(BlueprintCallable, Category = "Level Instance", meta = (Keywords = "Level Instance Actors Get"))
	static TArray<AActor*> GetActorsInLevelInstance(ALevelInstance* LevelInstanceActor);
};