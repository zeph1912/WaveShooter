// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ UNITYPLUGIN_EXPORTS
// �V���{�����g�p���ăR���p�C������܂��B���̃V���{���́A���� DLL ���g�p����v���W�F�N�g�ł͒�`�ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// UNITYPLUGIN_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifdef UNITYPLUGIN_EXPORTS
#define UNITYPLUGIN_API __declspec(dllexport)
#else
#define UNITYPLUGIN_API __declspec(dllimport)
#endif

// ���̃N���X�� UnityPlugin.dll ����G�N�X�|�[�g����܂����B
class UNITYPLUGIN_API CUnityPlugin {
public:
	CUnityPlugin(void);
	// TODO: ���\�b�h�������ɒǉ����Ă��������B
};

extern UNITYPLUGIN_API int nUnityPlugin;

UNITYPLUGIN_API int fnUnityPlugin(void);
