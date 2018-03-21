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

#ifndef QTAWS_DELETETHREATINTELSETRESPONSE_H
#define QTAWS_DELETETHREATINTELSETRESPONSE_H

#include "guarddutyresponse.h"
#include "deletethreatintelsetrequest.h"

namespace AWS {

namespace GuardDuty {

class DeleteThreatIntelSetResponsePrivate;

class QTAWS_EXPORT DeleteThreatIntelSetResponse : public DeleteThreatIntelSetResponse {
    Q_OBJECT

public:
    DeleteThreatIntelSetResponse(const DeleteThreatIntelSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThreatIntelSetRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteThreatIntelSetResponse)
    Q_DISABLE_COPY(DeleteThreatIntelSetResponse)

};

} // namespace GuardDuty
} // namespace AWS

#endif
