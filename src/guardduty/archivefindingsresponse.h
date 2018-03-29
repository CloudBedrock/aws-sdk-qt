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

#ifndef QTAWS_ARCHIVEFINDINGSRESPONSE_H
#define QTAWS_ARCHIVEFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "archivefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ArchiveFindingsResponsePrivate;

class QTAWS_EXPORT ArchiveFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ArchiveFindingsResponse(const ArchiveFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ArchiveFindingsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ArchiveFindingsResponse)
    Q_DISABLE_COPY(ArchiveFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
