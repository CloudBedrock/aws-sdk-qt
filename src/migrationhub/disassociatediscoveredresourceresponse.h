/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_H
#define QTAWS_DISASSOCIATEDISCOVEREDRESOURCERESPONSE_H

#include "migrationhubresponse.h"
#include "disassociatediscoveredresourcerequest.h"

namespace QtAws {
namespace MigrationHub {

class DisassociateDiscoveredResourceResponsePrivate;

class QTAWS_EXPORT DisassociateDiscoveredResourceResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    DisassociateDiscoveredResourceResponse(const DisassociateDiscoveredResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDiscoveredResourceRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DisassociateDiscoveredResourceResponse)
    Q_DISABLE_COPY(DisassociateDiscoveredResourceResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
