/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_H
#define QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociateskillgroupfromroomrequest.h"

namespace AWS {

namespace AlexaForBusiness {

class DisassociateSkillGroupFromRoomResponsePrivate;

class QTAWS_EXPORT DisassociateSkillGroupFromRoomResponse : public DisassociateSkillGroupFromRoomResponse {
    Q_OBJECT

public:
    DisassociateSkillGroupFromRoomResponse(const DisassociateSkillGroupFromRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSkillGroupFromRoomRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DisassociateSkillGroupFromRoomResponse)
    Q_DISABLE_COPY(DisassociateSkillGroupFromRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace AWS

#endif
