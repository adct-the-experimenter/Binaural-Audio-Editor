#include "LoadSystem.h"

LoadSystem::LoadSystem()
{
	
}

LoadSystem::~LoadSystem()
{
	
}
	
void LoadSystem::LoadProject(std::vector < std::unique_ptr <SoundProducer> > *sound_producer_vector_ptr,
							 EffectsManager* effectsManagerPtr, 
							 std::string path)
{
	xml_reader.LoadDataFromXMLFile(sound_producer_vector_ptr,
								effectsManagerPtr->GetReferenceToSoundProducerTracksVector(),
								&effectsManagerPtr->echo_zones_vector,
								&effectsManagerPtr->standard_reverb_zones_vector,
								&effectsManagerPtr->eax_reverb_zones_vector,
								path);
}