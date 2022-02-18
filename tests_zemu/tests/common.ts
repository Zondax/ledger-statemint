import { DeviceModel } from '@zondax/zemu'

const Resolve = require('path').resolve

export const APP_SEED = 'equip will roof matter pink blind book anxiety banner elbow sun young'

const APP_PATH_S = Resolve('../app/output/app_s.elf')
const APP_PATH_X = Resolve('../app/output/app_x.elf')

export const models: DeviceModel[] = [
  { name: 'nanos', prefix: 'S', path: APP_PATH_S },
  { name: 'nanox', prefix: 'X', path: APP_PATH_X },
]

export const txBasic =
  '04000013fc2e5c76a793f103fc83ef48a2727ac4b97c58353df43ae1a5fbfeac0f633c03d2029649d5038d240b63ce64c10c05bf23000008000000b0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafeb0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafe'

export const txNomination =
  '0605040075bbe170d769be719cf3a6ccefac04bbab005ddfed1cadf4243720c927b10ef3d5030400bf23000008000000b0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafeb0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafe'

export const setKeys =
    '0800340cd25a183c55b4bd99f1d1cfe40877091e6dd20e8ad57e40dc97bccb99d0a0c6b0d1f4b70128a54b2b8580bb6ce648cfc95dc933f8b4061997ef75ccb7c54fbbc8cf9e9ea13c537f0fe541d75f25cadb73479db1c919304d0e3ff9b9ae280672c84f612aa5f99a5e944bea8af3b0b4d6767604087d5409451174fba43f7dfccb59b64ced01c73862b0a21aec79fc99d5b49af177f30ac4301197a43081e9026dfc16c86a9159dacaa1423ebe11edb2166a92c295fb5132316ef1c803ee216a8059ff19aba27c51d510aadcdb65e2e60ab26c9a751aeafc3d512d0b57e71a6d7bd503046d0fbf23000008000000b0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafeb0a8d493285c2df73290dfb7e61f870f17b41801197a149ca93654499ea3dafe'
