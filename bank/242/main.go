/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/106386/
*/

package main

import (
	"strconv"
)

type Permissions struct {
	canSeeMessages      bool
	canDeleteMessages   bool
	canEditMessages     bool
	canKickMembers      bool
	canMakeMembersAdmin bool
	canAddMembers       bool
}

func SetUserPermissions(permissions *Permissions) int8 {
	p := permissions;
	var res int8 = 0 

	if p.canSeeMessages {
		res = res + 1
	}

	if p.canDeleteMessages {
		res = res + 2
	}

	if p.canEditMessages {
		res = res + 4
	}

	if p.canKickMembers {
		res = res + 8
	}

	if p.canMakeMembersAdmin {
		res = res + 16
	}

	if p.canAddMembers {
		res = res + 32
	}

	return res
}

func GetUserPermissions(permissionsMask int8) *Permissions {
	p := &Permissions{}
	permissions := int64(permissionsMask)
    n, _ := strconv.Atoi(strconv.FormatInt(permissions, 2))

	m := int64(n)

	slc := []int64{}
	for m > 0 {
		slc = append([]int64{m % 10}, slc...)
		m = m / 10
	}

	if len(slc) > 5 && slc[len(slc) - 6] == 1 {
		p.canAddMembers = true
	}

	if len(slc) > 4 && slc[len(slc) - 5] == 1 {
		p.canMakeMembersAdmin = true
	}

	if len(slc) > 3 && slc[len(slc) - 4] == 1{
		p.canKickMembers = true
	}

	if len(slc) > 2 && slc[len(slc) - 3] == 1{
		p.canEditMessages = true
	}

	if len(slc) > 1 && slc[len(slc) - 2] == 1{
		p.canDeleteMessages = true
	}

	if len(slc) > 0 && slc[len(slc) - 1] == 1{
		p.canSeeMessages = true
	}
	return p
}