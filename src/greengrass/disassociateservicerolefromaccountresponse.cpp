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

#include "disassociateservicerolefromaccountresponse.h"
#include "disassociateservicerolefromaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DisassociateServiceRoleFromAccountResponse
 *
 * @brief  Handles Greengrass DisassociateServiceRoleFromAccount responses.
 *
 * @see    GreengrassClient::disassociateServiceRoleFromAccount
 */

/**
 * @brief  Constructs a new DisassociateServiceRoleFromAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateServiceRoleFromAccountResponse::DisassociateServiceRoleFromAccountResponse(
        const DisassociateServiceRoleFromAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisassociateServiceRoleFromAccountResponse(new DisassociateServiceRoleFromAccountResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceRoleFromAccountRequest(request));
    setReply(reply);
}

const DisassociateServiceRoleFromAccountRequest * DisassociateServiceRoleFromAccountResponse::request() const
{
    Q_D(const DisassociateServiceRoleFromAccountResponse);
    return static_cast<const DisassociateServiceRoleFromAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DisassociateServiceRoleFromAccount response.
 *
 * @param  response  Response to parse.
 */
void DisassociateServiceRoleFromAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateServiceRoleFromAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateServiceRoleFromAccountResponsePrivate
 *
 * @brief  Private implementation for DisassociateServiceRoleFromAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateServiceRoleFromAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateServiceRoleFromAccountResponse instance.
 */
DisassociateServiceRoleFromAccountResponsePrivate::DisassociateServiceRoleFromAccountResponsePrivate(
    DisassociateServiceRoleFromAccountResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DisassociateServiceRoleFromAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateServiceRoleFromAccountResponsePrivate::parseDisassociateServiceRoleFromAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceRoleFromAccountResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
