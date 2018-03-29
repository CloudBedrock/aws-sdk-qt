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

#include "moveaccountresponse.h"
#include "moveaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  MoveAccountResponse
 *
 * @brief  Handles Organizations MoveAccount responses.
 *
 * @see    OrganizationsClient::moveAccount
 */

/**
 * @brief  Constructs a new MoveAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MoveAccountResponse::MoveAccountResponse(
        const MoveAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new MoveAccountResponsePrivate(this), parent)
{
    setRequest(new MoveAccountRequest(request));
    setReply(reply);
}

const MoveAccountRequest * MoveAccountResponse::request() const
{
    Q_D(const MoveAccountResponse);
    return static_cast<const MoveAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations MoveAccount response.
 *
 * @param  response  Response to parse.
 */
void MoveAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(MoveAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MoveAccountResponsePrivate
 *
 * @brief  Private implementation for MoveAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MoveAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MoveAccountResponse instance.
 */
MoveAccountResponsePrivate::MoveAccountResponsePrivate(
    MoveAccountResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations MoveAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MoveAccountResponsePrivate::parseMoveAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MoveAccountResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
