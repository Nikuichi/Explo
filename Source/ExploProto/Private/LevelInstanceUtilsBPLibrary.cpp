#include "LevelInstanceUtilsBPLibrary.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "Engine/Level.h"

TArray<AActor*> ULevelInstanceUtilsBPLibrary::GetActorsInLevelInstance(ALevelInstance* LevelInstanceActor)
{
	TArray<AActor*> OutActors;

	if (!IsValid(LevelInstanceActor))
	{
		return OutActors;
	}

	// Récupère le ULevel chargé associé à cette instance
	ULevel* LoadedLevel = LevelInstanceActor->GetLoadedLevel();
	if (!LoadedLevel)
	{
		return OutActors;
	}

	for (AActor* Actor : LoadedLevel->Actors)
	{
		if (IsValid(Actor))
		{
			OutActors.Add(Actor);
		}
	}

	return OutActors;
}