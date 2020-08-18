#pragma once

class AudioSound3D : public CBaseEntity
{
public:
	void			Spawn() override;
	void			OnPlayerJoin( CBasePlayer* player ) override;
	void			KeyValue( KeyValueData* pkvd ) override;

	void			Use( CBaseEntity* activator, CBaseEntity* caller, USE_TYPE useType, float value ) override;
	void			Think() override;

private:
	string_t		soundName;
	float			volume;
	int				channelNumber;
	Vector			customSoundLocation{Vector(0,0,0)};
};
