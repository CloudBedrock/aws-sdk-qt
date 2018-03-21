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

#ifndef QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_H
#define QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_H

#include "inspectorresponse.h"
#include "removeattributesfromfindingsrequest.h"

namespace AWS {

namespace Inspector {

class RemoveAttributesFromFindingsResponsePrivate;

class QTAWS_EXPORT RemoveAttributesFromFindingsResponse : public RemoveAttributesFromFindingsResponse {
    Q_OBJECT

public:
    RemoveAttributesFromFindingsResponse(const RemoveAttributesFromFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAttributesFromFindingsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(RemoveAttributesFromFindingsResponse)
    Q_DISABLE_COPY(RemoveAttributesFromFindingsResponse)

};

} // namespace Inspector
} // namespace AWS

#endif
