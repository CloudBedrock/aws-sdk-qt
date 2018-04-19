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

#include "rdsresponse.h"
#include "rdsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/*!
 * \class QtAws::RDS::RDSResponse
 * \brief The RDSResponse class provides an interface for RDS responses.
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a RDSResponse object with parent \a parent.
 */
RDSResponse::RDSResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RDSResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RDSResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RDSResponsePrivate.
 */
RDSResponse::RDSResponse(RDSResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RDSResponse::parseFailure(QIODevice &response)
{
    Q_D(RDSResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::RDS::RDSResponsePrivate
 * \brief The RDSResponsePrivate class provides private implementation for RDSResponse.
 * \internal
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a RDSResponsePrivate object with public implementation \a q.
 */
RDSResponsePrivate::RDSResponsePrivate(
    RDSResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RDS
} // namespace QtAws
