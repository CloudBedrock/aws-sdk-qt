/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATESKILLGROUPREQUEST_P_H
#define QTAWS_CREATESKILLGROUPREQUEST_P_H

#include "alexaforbusiness_p.h"
#include "createskillgrouprequest.h"

namespace AWS {

namespace AlexaForBusiness {

class CreateSkillGroupRequest;

class QTAWS_EXPORT CreateSkillGroupRequestPrivate : public AlexaForBusinessPrivate {

public:
    CreateSkillGroupRequestPrivate(const AlexaForBusiness::Action action,
                                   CreateSkillGroupRequest * const q);
    CreateSkillGroupRequestPrivate(const CreateSkillGroupRequestPrivate &other,
                                   CreateSkillGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace AWS

#endif
