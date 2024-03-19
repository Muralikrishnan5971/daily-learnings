def recursiv_name(name):
    if len(name) == 100:
        return name
    else:
        name.append("Vim")
        return recursiv_name(name)

print(recursiv_name(["Murali"]))
