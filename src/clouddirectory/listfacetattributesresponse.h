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

#ifndef QTAWS_LISTFACETATTRIBUTESRESPONSE_H
#define QTAWS_LISTFACETATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listfacetattributesrequest.h"

namespace AWS {

namespace CloudDirectory {

class ListFacetAttributesResponsePrivate;

class QTAWS_EXPORT ListFacetAttributesResponse : public ListFacetAttributesResponse {
    Q_OBJECT

public:
    ListFacetAttributesResponse(const ListFacetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFacetAttributesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListFacetAttributesResponse)
    Q_DISABLE_COPY(ListFacetAttributesResponse)

};

} // namespace CloudDirectory
} // namespace AWS

#endif
