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

#include "getaddressbookresponse.h"
#include "getaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetAddressBookResponse
 *
 * @brief  Handles AlexaForBusiness GetAddressBook responses.
 *
 * @see    AlexaForBusinessClient::getAddressBook
 */

/**
 * @brief  Constructs a new GetAddressBookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAddressBookResponse::GetAddressBookResponse(
        const GetAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetAddressBookResponsePrivate(this), parent)
{
    setRequest(new GetAddressBookRequest(request));
    setReply(reply);
}

const GetAddressBookRequest * GetAddressBookResponse::request() const
{
    Q_D(const GetAddressBookResponse);
    return static_cast<const GetAddressBookRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness GetAddressBook response.
 *
 * @param  response  Response to parse.
 */
void GetAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAddressBookResponsePrivate
 *
 * @brief  Private implementation for GetAddressBookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAddressBookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAddressBookResponse instance.
 */
GetAddressBookResponsePrivate::GetAddressBookResponsePrivate(
    GetAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness GetAddressBookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAddressBookResponsePrivate::parseGetAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
