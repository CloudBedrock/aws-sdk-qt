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

#ifndef QTAWS_LISTWEBACLSRESPONSE_H
#define QTAWS_LISTWEBACLSRESPONSE_H

#include "wafregionalresponse.h"
#include "listwebaclsrequest.h"

namespace QtAws {
namespace WAFRegional {

class ListWebACLsResponsePrivate;

class QTAWS_EXPORT ListWebACLsResponse : public WAFRegionalResponse {
    Q_OBJECT

public:
    ListWebACLsResponse(const ListWebACLsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWebACLsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ListWebACLsResponse)
    Q_DISABLE_COPY(ListWebACLsResponse)

};

} // namespace WAFRegional
} // namespace QtAws

#endif
