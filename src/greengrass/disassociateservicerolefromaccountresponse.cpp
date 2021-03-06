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

#include "disassociateservicerolefromaccountresponse.h"
#include "disassociateservicerolefromaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountResponse
 * \brief The DisassociateServiceRoleFromAccountResponse class provides an interace for Greengrass DisassociateServiceRoleFromAccount responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::disassociateServiceRoleFromAccount
 */

/*!
 * Constructs a DisassociateServiceRoleFromAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateServiceRoleFromAccountResponse::DisassociateServiceRoleFromAccountResponse(
        const DisassociateServiceRoleFromAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DisassociateServiceRoleFromAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceRoleFromAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateServiceRoleFromAccountRequest * DisassociateServiceRoleFromAccountResponse::request() const
{
    Q_D(const DisassociateServiceRoleFromAccountResponse);
    return static_cast<const DisassociateServiceRoleFromAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DisassociateServiceRoleFromAccount \a response.
 */
void DisassociateServiceRoleFromAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateServiceRoleFromAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountResponsePrivate
 * \brief The DisassociateServiceRoleFromAccountResponsePrivate class provides private implementation for DisassociateServiceRoleFromAccountResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateServiceRoleFromAccountResponsePrivate object with public implementation \a q.
 */
DisassociateServiceRoleFromAccountResponsePrivate::DisassociateServiceRoleFromAccountResponsePrivate(
    DisassociateServiceRoleFromAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DisassociateServiceRoleFromAccount response element from \a xml.
 */
void DisassociateServiceRoleFromAccountResponsePrivate::parseDisassociateServiceRoleFromAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceRoleFromAccountResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
