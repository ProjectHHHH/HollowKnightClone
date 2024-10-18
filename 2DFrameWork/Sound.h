#pragma once
class Sound : public Singleton<Sound>
{
	struct SoundNode
	{
		FMOD::Sound * sound;        //����� ���� ������
		FMOD::Channel * channel;    //������� ä��
        float volume = 1.0f;
    };

	FMOD::System * system;
	map<string, SoundNode*> SoundList;


public:
    Sound();
    ~Sound();
    //�������� ���� �߰� 
    bool AddSound(string File, string Key, bool loop = false);
    //�������� ���� ����
    bool DeleteSound(string Key);

    //�׸��� key�� �Ű������� �ΰ� ��� ����
    void Play(string Key);
    void Stop(string Key);
    //�Ͻ�����
    void Pause(string Key);
    //�Ͻ����� ����
    void Resume(string Key);

    void SetVolume(string Key, float scale);
    void SetMasterVolume(float scale);
    void SetAllVolume(float scale);
    void SetEffectVolume(float scale);
    void SetMusicVolume(float scale);

    void Update();

};

