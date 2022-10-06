en_to_arm_dict = {}
with open('en-arm.txt', 'r') as dict_file:
    for entry in dict_file:
        en, arm = entry.strip().split('-')
        en_to_arm_dict[en] = arm

for en, arm in en_to_arm_dict.items():
    print(f"{en:<10}-{arm}")